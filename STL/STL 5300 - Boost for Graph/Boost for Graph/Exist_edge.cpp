#include <iostream>
#include <boost/graph/adjacency_list.hpp>

using namespace boost ;
using namespace std ;

typedef adjacency_list<vecS, vecS, undirectedS> Graph;

int main(int,char*[]) {  // Create a graph object

  Graph g;
  Graph::vertex_descriptor v0 = add_vertex(g);
  Graph::vertex_descriptor v1 = add_vertex(g);

  cout << "Edge exists? " << edge(v0, v1, g).second << endl; // false

  // Add an edge (v0, v1).
  pair<Graph::edge_descriptor, bool> e0 = add_edge(v0, v1, g);

  // Check again if an edge between v0 and v1 exists. It should now.
  cout << "Edge exists? " << edge(v0, v1, g).second << endl; // true

  // A demonstration of the full return type of edge().
  // At this point, retrievedEdge.first should be exactly equal to e0
  pair<Graph::edge_descriptor, bool> retrievedEdge = edge(v0, v1, g);

  return 0;
}
