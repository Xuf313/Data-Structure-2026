from collections import Counter

# people = int(input())
# bidding = {}
# for i in range(people):
#     name, value = input().split()
#     bidding[name] = int(value)

# unique_values = {value for value, count in Counter(bidding.values()).items() if count == 1}

# max_bid = max(unique_values) if unique_values else None
# max_bidder = [name for name, value in bidding.items() if value == max_bid]
# print(max_bidder[0] if max_bidder else "NONE")

#위 코드를 gemini 에 token minimize 한 버전입니다.

d = [input().split() for _ in range(int(input()))]
c = Counter(v for _, v in d)
u = max((int(v) for _, v in d if c[v] == 1), default=None)
print(next((k for k, v in d if int(v) == u), "NONE"))