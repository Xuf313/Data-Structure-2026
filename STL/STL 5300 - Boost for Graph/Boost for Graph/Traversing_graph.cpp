#include <boost/graph/adjacency_list.hpp>
#include <iostream>
using namespace boost;
using namespace std ;

typedef boost::adjacency_list<listS, vecS, undirectedS> mygraph;


int main() {

 mygraph g;
 add_edge (0, 1, g);
 add_edge (0, 3, g);
 add_edge (1, 2, g);
 add_edge (2, 3, g);
 add_edge (2, 5, g);
 add_edge (2, 6, g);
 add_edge (4, 6, g);


 mygraph::vertex_iterator vertexIt, vertexEnd;
 mygraph::adjacency_iterator neighbourIt, neighbourEnd;
 tie(vertexIt, vertexEnd) = vertices(g);

 for (; vertexIt != vertexEnd; ++vertexIt)   {
    cout << *vertexIt << " is connected with ";
    tie(neighbourIt, neighbourEnd) = adjacent_vertices(*vertexIt, g);
    for (; neighbourIt != neighbourEnd; ++neighbourIt)
    cout << *neighbourIt << " ";
    cout << "\n";
   } // end of for()

} // end of main()

