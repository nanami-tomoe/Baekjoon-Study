N = int(input())
N_list = [input() for _ in range(N)]
for vps in N_list:
    instance = 0
    for each in vps:
        if instance >= 0 and each == '(':
            instance+=1
        elif instance >=0 and each == ')':
            instance-=1
    if instance == 0:
        print("YES")
    else:
        print("NO")