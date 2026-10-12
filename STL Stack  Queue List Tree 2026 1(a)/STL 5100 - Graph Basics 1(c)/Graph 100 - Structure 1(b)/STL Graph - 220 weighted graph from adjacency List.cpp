#include <iostream>
#include <vector>
#include <utility> // for pair
using namespace std;

void addEdge(vector<pair<int, int>> adj[], int u, int v, int wt) {
    adj[u].push_back(make_pair(v, wt));
    adj[v].push_back(make_pair(u, wt)); // 무방향 그래프
}

void printGraph(vector<pair<int, int>> adj[], int V) {
    for (int u = 0; u < V; u++) {
        cout << "정점 " << u << "의 연결: ";
        for (auto it = adj[u].begin(); it != adj[u].end(); it++) {
            cout << "-> (" << it->first << ", " << it->second << ") ";
        }
        cout << endl;
    }
}

int main() {
    int V = 5;
    vector<pair<int, int>> adj[V];
    addEdge(adj, 0, 1, 10);
    addEdge(adj, 0, 4, 20);
    addEdge(adj, 1, 2, 30);
    addEdge(adj, 1, 3, 40);
    addEdge(adj, 1, 4, 50);
    addEdge(adj, 2, 3, 60);
    addEdge(adj, 3, 4, 70);
    printGraph(adj, V);
    return 0;
}
