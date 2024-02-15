import sys
from collections import deque
input = sys.stdin.readline
N=int(input())
results=[]

for i in range(N):
    reverse = False
    string = input().strip()
    length = int(input())
    try:
        temp = input().strip().strip("[]")
        if temp:
            N_list = deque(int(n) for n in temp.split(","))
        else:
            N_list = deque()

        for alpabet in string:
            if alpabet=='R':
                reverse = not reverse
            elif alpabet=='D':
                if reverse == False:
                    N_list.popleft()
                else:
                    N_list.pop()
        if reverse:
            N_list.reverse()
        results.append(list(N_list))
    except:
        results.append("error")

for result in results:
    if type(result) == str:
        print(result)
    else:
        print('[' + ','.join(map(str, result)) + ']')
