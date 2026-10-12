import sys
from bisect import insort
from itertools import zip_longest


def register(code, uid, cote):
    insort(db.setdefault(code, []), (-cote, -uid, code))


def pop(p, q):
    canu = sorted((grad for grad in db.values() if len(grad) >= k),
                  key=lambda grad: (-len(grad), sum(cote for cote, *_ in grad)))
    ranking = [entry for tier in zip_longest(*canu) for entry in tier if entry]
    chosen = ranking[p - 1:q]
    if chosen:
        print(*(-uid for _, uid, _ in chosen))
    for entry in chosen:
        db[entry[2]].remove(entry)


_, k, *tokens = sys.stdin.read().split()
k = int(k)
db = {}
for cmd, x, y in zip(*[iter(tokens)] * 3):
    if cmd == 'POP':
        pop(int(x), int(y))
    else:
        register(cmd, int(x), int(y))