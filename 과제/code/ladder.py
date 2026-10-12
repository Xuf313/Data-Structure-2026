# K = int(input())
# arr = [chr(ord('a') + i) for i in range(K)]
# bars = []
# for col in range(K-1) :
#     numbers = [int(x) for x in input().split()]
#     for i in range(len(numbers)) :
#         depth = numbers[i]

#         if depth == -1 :
#             break

#         bars.append((depth, col))

# bars.sort(key = lambda x : x[0])
# print(bars)

# for depth, col in bars :
#     arr[col] , arr[col+1] = arr[col+1], arr[col]

# print(arr)

#위 코드를 gemini 이 token-optimized version 으로 바꿔준것입니다.

K = int(input())
a = [chr(97 + i) for i in range(K)]
b = []

for c in range(K - 1):
    #[:-1] 를 사용하면서 마지막 "-1" 를 잘라내고 inner loop 를 생락할 수 있었습나다.
    b += [(int(d), c) for d in input().split()[:-1]]

for _, c in sorted(b):
    a[c], a[c+1] = a[c+1], a[c]

print(" ".join(a))