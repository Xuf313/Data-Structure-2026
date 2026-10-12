import networkx as nx
import matplotlib.pyplot as plt

# 7개의 노드를 가진 랜덤 라벨드 루트 트리 생성
n = 27
T = nx.random_labeled_rooted_tree(n, seed=42)  # seed는 선택사항

# 루트 노드 정보 확인
root = T.graph["root"]
print(f"생성된 트리의 루트 노드: {root}")
print(f"모든 노드: {list(T.nodes())}")
print(f"모든 간선: {list(T.edges())}")

##
### 트리 시각화
##plt.figure(figsize=(10, 8))
##pos = nx.spring_layout(T)  # 노드 위치 계산
##nx.draw(T, pos, with_labels=True, node_color='lightblue',
##        node_size=800, font_size=12, font_weight='bold')
### 루트 노드 강조 표시
##nx.draw_networkx_nodes(T, pos, nodelist=[root],
##                       node_color='red', node_size=1000)
##plt.title(f"Random Rooted Tree (n={n}, root={root})")
##plt.axis('off')
##plt.show()

# 계층적 트리 레이아웃 생성 함수
def hierarchy_layout(G, root):
    levels = {root: 0}
    queue = [root]

    while queue:
        node = queue.pop(0)
        for neighbor in G.neighbors(node):
            if neighbor not in levels:
                levels[neighbor] = levels[node] + 1
                queue.append(neighbor)

    pos = {}
    level_groups = {}
    for node, level in levels.items():
        if level not in level_groups:
            level_groups[level] = []
        level_groups[level].append(node)

    max_level = max(levels.values())
    for level, nodes in level_groups.items():
        y = max_level - level
        x_positions = np.linspace(0, 1, len(nodes))
        for i, node in enumerate(sorted(nodes)):
            pos[node] = (x_positions[i], y)

    return pos

# 계층적 레이아웃으로 다시 그리기
import numpy as np


pos = hierarchy_layout(T, root)
nx.draw(T, pos, with_labels=True, node_color='lightblue',
        node_size=800, font_size=12, font_weight='bold',
        arrows=False)  # 무방향 그래프로 표시
nx.draw_networkx_nodes(T, pos, nodelist=[root],
                       node_color='red', node_size=1000)
plt.title(f"Hierarchical Layout - Random Rooted Tree (n={n}, root={root})")
plt.axis('off')
plt.show()