import networkx as nx

G = nx.path_graph(6)  # or MultiGraph, etc
G.edges.data('weight', default=1)

G.add_edge(2, 5, weight=5)
G.add_edge(1, 5, weight=3)
G.add_edge(1, 6, weight=6)
G[3][4]["weight"] = 7       #이렇게도 할 수 있다.

print(f"모든 edge 출력하기  {G.edges()= } " )
for w in G.edges :
    print(f" An edge = {w}, weight={G[w[0]][w[1]]} ")


print(f"\n 특정 vertex 연결 모든 ")
print(f" edge {G.edges(1)= } " )  # node 0에 붙은 모든 edge 출력하기

z=(2,5)
print(f" { G.edges(z)= }")
print(f" { G[1][6] =}")



G[0][1]["weight"] = 100

G[1][0]["weight"]

# edge set 원소로부터 바로 구하는 방법. reference를 이용해야 한다.

e = (0, 1)
print(f" {G.get_edge_data(*e)=}" )   # tuple form
print(f' {G.get_edge_data(1, 4, default=0)=} ')  # edge not in graph, return 0
print(f' {G.get_edge_data(1, 6, default=0)=} ')