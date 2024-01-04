N=int(input())
num=N
count = 1
close = False
if N%5==0:
    print(int(N/5))
    close = True
if not close:
    while(N>=3):
        if (N-3) % 5==0:
            print(count + int((N-3)/5))
            close = True
            break
        else:
            count += 1
            N-=3
if not close:
    N=num
    if N%5==0:
        print(int(N/5))
    else:
        print(-1)