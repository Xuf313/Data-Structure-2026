//=======================================================================
// Copyright 2001 Jeremy G. Siek, Andrew Lumsdaine, Lie-Quan Lee,
//
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//=======================================================================
#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/breadth_first_search.hpp>
#include <boost/pending/indirect_cmp.hpp>
#include <boost/range/irange.hpp>
#include <iostream>
using namespace boost;
using namespace std  ;

template < typename TimeMap > class bfs_time_visitor:public default_bfs_visitor {
  typedef typename property_traits < TimeMap >::value_type T;
public:
  bfs_time_visitor(TimeMap tmap, T & t):m_timemap(tmap), m_time(t) { }
  template < typename Vertex, typename Graph >
    void discover_vertex(Vertex u, const Graph & g) const  {
    put(m_timemap, u, m_time++);
  }
  TimeMap m_timemap;
  T & m_time;
};


int main() {
  using namespace boost;
  typedef adjacency_list < vecS, vecS, undirectedS > graph_t;
  enum { r, s, t, u, v, w, x, y, N };  // Set up the vertex IDs and names
  const char *name = "rstuvwxy";

  typedef pair < int, int >E;   // Specify the edges in the graph
  E edge_array[] = { E(r, s), E(r, v), E(s, w), E(w, r), E(w, t),
                     E(w, x), E(x, t), E(t, u), E(x, y), E(u, y)
  };
  // Create the graph object
  const int n_edges = sizeof(edge_array) / sizeof(E);
  typedef graph_traits<graph_t>::vertices_size_type v_size_t;
  graph_t g(edge_array, edge_array + n_edges, v_size_t(N));


  typedef graph_traits < graph_t >::vertices_size_type Size;   // Typedefs

  // a vector to hold the discover time property for each vertex
  vector < Size > dtime(num_vertices(g));
  typedef
    iterator_property_map<vector<Size>::iterator,
                          property_map<graph_t, vertex_index_t>::const_type>
    dtime_pm_type;
    dtime_pm_type dtime_pm(dtime.begin(), get(vertex_index, g));

  Size time = 0;
  bfs_time_visitor < dtime_pm_type >vis(dtime_pm, time);
  breadth_first_search(g, vertex(s, g), visitor(vis));

  // Use sort to order the vertices by their discover time
  vector<graph_traits<graph_t>::vertices_size_type > discover_order(N);
  integer_range < int >range(0, N);
  copy(range.begin(), range.end(), discover_order.begin());
  sort(discover_order.begin(), discover_order.end(),
            indirect_cmp < dtime_pm_type, less < Size > >(dtime_pm));

  cout << "order of discovery: ";
  for (int i = 0; i < N; ++i)
    cout << name[discover_order[i]] << " ";
  cout << endl;

  return EXIT_SUCCESS;
}
