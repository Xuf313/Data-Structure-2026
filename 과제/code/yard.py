# claude 도음 받아서 짠 코드입니다
import sys

lines = sys.stdin.buffer.read().splitlines()
yards = [line.split()[1:] for line in lines[1:int(lines[0]) + 1]]
heights = list(map(len, yards))
low, remainder = divmod(sum(heights), len(yards))
high = low + (remainder > 0)

moved, level = [], max(heights)
while level > high:
    bottom = max([height for height in heights if height < level] + [high])
    layers = zip(*(reversed(yard[bottom:level]) for yard in yards if len(yard) >= level))
    for tops in layers:
        moved += sorted(tops, key=int, reverse=True)
    level = bottom

for yard in yards:
    del yard[high:]

shortage = sum(max(0, low - height) for height in heights) - len(moved)
tallest = sorted(
    (yard for yard in yards if len(yard) == high > 0),
    key=lambda yard: int(yard[-1]),
    reverse=True
)
for yard in tallest[:max(0, shortage)]:
    moved.append(yard.pop())

level = min(heights)
while moved:
    receivers = [yard for yard, height in zip(yards, heights) if height <= level]
    span = min([height for height in heights if height > level] + [low]) - level or 1
    batch = moved[:len(receivers) * span]
    del moved[:len(batch)]
    for offset, yard in enumerate(receivers):
        yard += batch[offset::len(receivers)]
    level += span

sys.stdout.buffer.write(b'\n'.join(b' '.join(yard) or b'0' for yard in yards))
