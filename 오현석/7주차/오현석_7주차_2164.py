from collections import deque
N = int(input())    
N_list = deque([i for i in range(1,N+1) if i % 2 == 0])

if N % 2 != 0:
    N_list.appendleft(N)    
    
while len(N_list) > 1:
    N_list.popleft()
    N_list.rotate(-1)

print(N_list[0])