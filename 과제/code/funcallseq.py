#used claude for this code
import sys
L=sys.stdin.read().split('\n')
n,a,b=map(int,L[0].split())
f={};c={}
for l in L[1:n+1]:
    t=l.split();f[t[0]]=[x for x in t[1:] if x!='$']  # name -> tokens, '$' dropped
def g(F):
    # total statements executed by F (memoized); c[F]=None marks "in progress"
    if F not in c:
        c[F]=None
        # uppercase token = call; revisiting an in-progress F returns None -> TypeError in sum
        c[F]=sum(g(x) if x.isupper() else 1 for x in f[F])
    return c[F]
def h(F,k):
    # find k-th (1-based) executed statement inside F by skipping whole calls via counts
    for x in f[F]:
        m=g(x) if x.isupper() else 1
        if k<=m:return h(x,k) if x.isupper() else F+'-'+x
        k-=m
try:T=g('M')
except TypeError:print('DEADLOCK');exit()  # recursion cycle reachable from M
for k in a,b:
    if k<0:k+=T+1  # negative index counts from the end
    print(h('M',k) if 0<k<=T else 'NONE')