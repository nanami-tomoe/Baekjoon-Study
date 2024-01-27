N,M = map(int, input().split())
N_list = list(map(int, input().split()))
save = -1
for i in range(len(N_list)-2):
    for j in range(i+1,len(N_list)-1):
        for k in range(j+1, len(N_list)):
            temp = N_list[i]+ N_list[j]+N_list[k]
            if temp <= M and save < temp:
                save = temp
print(save)