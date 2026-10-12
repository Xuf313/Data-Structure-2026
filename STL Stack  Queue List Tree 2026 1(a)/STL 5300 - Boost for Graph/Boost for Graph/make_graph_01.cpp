 #include <iostream>                  // for cout
 #include <utility>                   // for pair
 #include <algorithm>                 // for for_each
 #include <boost/graph/graph_traits.hpp>
 #include <boost/graph/adjacency_list.hpp>
 #include <boost/graph/dijkstra_shortest_paths.hpp>
  using namespace boost;
  using namespace std ;

  int main(int,char*[])   {

    // create a typedef for the Graph type
    typedef adjacency_list<vecS, vecS, bidirectionalS> Graph;

    enum { A, B, C, D, E, N };  // 정점의 이름 만들기
    const int num_vertices = N;
    const char* name = "ABCDE";

    typedef pair<int, int> Edge;  // 에지를 그래프에 넣기

    Edge edge_array[] = { Edge(A,B), Edge(A,D), Edge(C,A), Edge(D,C),
                          Edge(C,E), Edge(B,D), Edge(D,E) };

    const int num_edges = sizeof(edge_array)/sizeof(edge_array[0]);

    Graph g(num_vertices);  //  선언하기:  graph object
    for (int i = 0; i < num_edges; ++i)  // edges를 그래프에 넣음
      add_edge(edge_array[i].first, edge_array[i].second, g);


    typedef graph_traits<Graph>::vertex_descriptor Vertex;

    // vertex에 대한 property_map을 불러오기
    typedef property_map<Graph, vertex_index_t>::type IndexMap;
    IndexMap index = get(vertex_index, g);

    cout << "\n vertices(g) = ";
    typedef graph_traits<Graph>::vertex_iterator vertex_iter;
    pair<vertex_iter, vertex_iter> vp;

    for (vp = vertices(g); vp.first != vp.second; ++vp.first) {
      Vertex v = *vp.first;
      cout << index[v] <<  " ";
    }

    cout << "\n edges(g) = ";
    graph_traits<Graph>::edge_iterator ei, ei_end;
    for (boost::tie(ei, ei_end) = edges(g); ei != ei_end; ++ei)
        cout << "(" << index[source(*ei, g)]
                  << "," << index[target(*ei, g)] << ") ";
    return 0;
  } // end of main()

