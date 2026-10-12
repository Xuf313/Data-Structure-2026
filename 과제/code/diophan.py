n=int(input())
coefs=list(map(int,input().split()))
target=int(input())-sum(coefs)  # x_i>=1 -> shift: count non-negative solutions of sum c_i*y_i = R-sum(c)
if target<0:print(0);exit()
ways=[1]+[0]*target  # ways[i] = ways to make i (unbounded knapsack, coin-change style)
for coef in coefs:
    for total in range(coef,target+1):ways[total]=(ways[total]+ways[total-coef])%19991
print(ways[target])