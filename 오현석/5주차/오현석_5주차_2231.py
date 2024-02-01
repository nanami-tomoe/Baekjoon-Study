N = int(input())
check = False
for i in range(N+2):
    N_list = [int(d) for d in str(i)]
    if N == (i+sum(N_list)):
        print(i)
        break
    if i>N:
        print(0)
        break