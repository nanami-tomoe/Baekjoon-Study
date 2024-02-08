import sys
input=sys.stdin.readline
N, M = map(int, input().split())
N_list = list(map(int, input().split()))
scope = []
for i in range(M):
    scope.append(list(map(int, input().split())))
sum_array = [0] * (N+1)
for i in range(N):
    sum_array[i+1] = N_list[i] + sum_array[i]
for start, end in scope:
    print(sum_array[end]-sum_array[start-1])