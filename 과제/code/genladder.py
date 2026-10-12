# K = int(input())
# a = [chr(ord('A') + i) for i in range(K)]
# b = []

# for c in range(K - 1):
#     #[:-1] 를 사용하면서 마지막 "-1" 를 잘라내고 inner loop 를 생락할 수 있었습나다.
#     b += [(int(d), c) for d in input().split()[:-1]]

# b = sorted(b, key=lambda x: x[0])

# i = 0
# while i < len(b):
#     d, c = b[i]
#     e = c

#     while i + 1 < len(b) and b[i + 1][0] == d and b[i + 1][1] == e + 1:
#         e += 1
#         i += 1
    
#     a[c], a[e + 1] = a[e + 1], a[c]
#     i += 1

# print(" ".join(a))

#위 코드를 gemini 이 token-optimized version 으로 바꿔준것입니다.
'''처음에 col-1 와 col+1 을 swap 하는 방식으로 구현했는데, 이 방식은 연속된 col 에 대해서는 swap 이 제대로 이루어지지 않는 문제가 있었습니다.
 그래서 gemini 한테 물어보니 outermost 둘 자리를 바꾸는거로 구성해보는것으로 조언 받고 해봤습나다.
 그리고 .join() 말고 print(*a) 로 바꾸는게 token 더 적게 쓴다고 해서 바꿨습니다.
'''
K=int(input())

arr=[chr(65+i)for i in range(K)]

bars=sorted((int(depth),col)for col in range(K-1)for depth in input().split()[:-1])

i=0
while i<len(bars):
 depth,start_col=bars[i];end_col=start_col

 while i+1<len(bars)and bars[i+1]==(depth,end_col+1):end_col+=1;i+=1

 arr[start_col],arr[end_col+1]=arr[end_col+1],arr[start_col];i+=1

print(*arr)