import random

height = []
for _ in range(9):
    height.append(int(input()))

while True:
    result = random.sample(height, 7)
    if sum(result) == 100:
        break

result.sort()
for h in result:
    print(h)
