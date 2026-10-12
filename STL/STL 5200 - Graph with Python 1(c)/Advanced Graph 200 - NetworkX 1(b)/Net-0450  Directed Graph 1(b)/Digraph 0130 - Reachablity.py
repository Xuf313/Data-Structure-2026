#-------------------------------------------------------------------------------
# Name:        module1
# Author:      Zoh Que
# Created:     30-07-2024
#-------------------------------------------------------------------------------
"""
 1. hamiltonian_path(G): Returns a Hamiltonian path in the given tournament graph.
 2. is_reachable(G, s, t); Decides whether there is a path from s to t in the tournament.
 3. is_strongly_connected(G) : Decides whether the given tournament is strongly connected.
 4. is_tournament(G) : Returns True if and only if G is a tournament.
 5. random_tournament(n[, seed]) : Returns a random tournament graph on n nodes.
 6. score_sequence(G) : Returns the score sequence for the given tournament graph.

"""

import networkx as nx

from networkx.algorithms import tournament

G = nx.DiGraph([(0, 1), (0, 2), (0, 3), (1, 2), (1, 3), (2, 3)])

R = nx.tournament.is_tournament(G)
print(f" {R=} ")
Path = nx.tournament.hamiltonian_path(G)
print(f" {Path=}")

