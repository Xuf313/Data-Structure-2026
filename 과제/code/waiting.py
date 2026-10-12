#gemini 의 도음을 받아 짠 코드입니다.
#이번 코드를 작성하면서 bisect 모듈을 사용하여 리스트를 정렬된 상태로 유지하면서 효율적으로 값을 삽입하고 삭제하는 방법을 배웠습니다.
#또한, zip과 슬라이싱을 활용하여 입력 데이터를 처리하는 방법도 익혔습니다.
import bisect

data = input().split()
N, k = int(data[0]), int(data[1])

for _ in range(N):
    data.extend(input().split())
    
chairs = []

for op, val in zip(data[2::2], data[3::2]):
    p = int(val)
    
    if op == '+':
        if not chairs:
            chairs.append([])
        
        idx = 0
        for i, c in enumerate(chairs):
            if c and c[0] <= p:
                idx = i
            else:
                break
                
        bisect.insort(chairs[idx], p)
        
        if len(chairs[idx]) == 2 * k:
            chairs.insert(idx + 1, chairs[idx][k:])
            del chairs[idx][k:]
            
    elif op == '-':
        for c in chairs:
            if p in c:
                c.remove(p)
                if not c:
                    chairs.remove(c)
                break

for c in chairs:
    print(c[0])