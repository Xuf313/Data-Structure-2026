# N  = int(input())
# priority = list(map(int, input().split()))
# students = {}
# for i in range(N):
#     name, *scores = input().split()
#     students[name] = [int(x) for x in scores[:-1]]

# m1 = {name: len(students[name]) for name in students}
# m2 = {name : sum(students[name]) for name in students}
# m3 = {name : min(students[name]) for name in students}
# m4 = {name : max(students[name]) for name in students}
# m5 = {name : students[name].count(100) for name in students}
# m6 = {name : sum(score <= 50 for score in students[name]) for name in students}

# m = [m1, m2, m3, m4, m5, m6]

# student_sort_list = []
# for name in students:
#     sort_key = []
#     for p in priority:
#         val = m[p - 1][name]
#         if p == 6:
#             sort_key.append(val)
#         else:
#             sort_key.append(-val)
            
#     sort_key.append(name)
#     student_sort_list.append(tuple(sort_key))

# student_sort_list.sort()

# for item in student_sort_list:
#     print(item[-1])

N = int(input())
priority = [int(x) - 1 for x in input().split()]
students = {}

for _ in range(N):
    parts = input().split()
    students[parts[0]] = [int(x) for x in parts[1:-1]]

def get_sort_key(name):
    s = students[name]
    # Calculate metrics: [m1, m2, m3, m4, m5, m6]
    m = (len(s), sum(s), min(s), max(s), s.count(100), sum(x <= 50 for x in s))
    
    # Apply priority sorting (negate for descending, keep positive for m6 ascending)
    key = [m[p] if p == 5 else -m[p] for p in priority]
    key.append(name)
    return key

for name in sorted(students, key=get_sort_key):
    print(name)