N = int(input())
if N<100:
    print(N)
else:
    num = 99
    for i in range(100,N+1):
        N_list = [int(d) for d in str(i)]
        if 2*N_list[1] is N_list[0] + N_list[2]:
            num+=1
    print(num)