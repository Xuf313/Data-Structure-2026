#include <iostream>
#include <boost/graph/graph_traits.hpp>
#include <boost/graph/directed_graph.hpp>

using namespace boost ;
using namespace std ;

typedef property<edge_weight_t, float> EdgeWeightProperty;
typedef directed_graph<no_property, EdgeWeightProperty> Graph;

int main(int,char*[]) {

  Graph g;   // Create a graph object
  Graph::vertex_descriptor v0 = g.add_vertex(); // Add vertices to the graph
  Graph::vertex_descriptor v1 = g.add_vertex();
  Graph::vertex_descriptor v2 = g.add_vertex();

  EdgeWeightProperty weight0 = 5;  // Create weighted edges
  add_edge(v0,v1,weight0,g);

  EdgeWeightProperty weight1 = 6;
  add_edge(v1,v2,weight1,g);

  { // Retrieve the weight of an edge (method 1)
    typedef property_map<Graph, edge_weight_t>::type EdgeWeightMap;
    EdgeWeightMap edgeWeightMap = get(edge_weight, g);

    pair<Graph::edge_descriptor, bool> edgePair = edge(v0, v1, g);
    Graph::edge_descriptor edge = edgePair.first;
    cout << "Edge (" << v0 << ", " << v1 << ") has weight " << edgeWeightMap[edge] << endl;
  }

  // method 2
  cout << "Edge (" << v0 << ", " << v1 << ") has weight " << get( edge_weight, g, edge ) << endl;


  return 0;
}
