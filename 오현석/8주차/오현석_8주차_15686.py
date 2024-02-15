import sys
from itertools import combinations

input = sys.stdin.readline
N,M = map(int, input().split())
N_list=[]
list_1=[]
list_2=[]
list_2_inst=[]
for i in range(N):
    N_list.append(list(map(int,input().split())))
    for j in range(len(N_list[i])):
        if N_list[i][j] == 1:
            list_1.append([i,j])
        elif N_list[i][j] ==2:
            list_2.append([i,j])
list_2_inst = list(combinations(list_2, M))
sum_distance = [0]*len(list_2_inst)
for num in range(len(list_2_inst)):
    for i, j in list_1:
        k=1000
        for x, y in list_2_inst[num]:
            k = (abs(i-x)+abs(j-y)) if k > (abs(i-x)+abs(j-y)) else k
        sum_distance[num]+=k
print(min(sum_distance))