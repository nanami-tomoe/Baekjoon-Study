import math
import sys
input=sys.stdin.readline
N = int(input())
N_list = [int(input()) for _ in range(N)]
N_list.sort()
N_count_list = [0 for _ in range(N)]

avg = math.floor((sum(N_list)/N)+0.5)

counts = [0]*8001
for number in N_list:
    counts[number+4000] += 1

max_count = max(counts)
modes = [i-4000 for i, count in enumerate(counts) if count == max_count]

if len(modes) > 1:
    mode = modes[1]
else:
    mode = modes[0]

center = math.floor(N_list[int(N/2)]+0.5)
print(avg)
print(center)
print(mode)
print(N_list[-1]-N_list[0])
    