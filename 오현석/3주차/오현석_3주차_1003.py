def fibonacci(n):
    pos=1
    size=[0,0]
    if int(n/10)>0:
        pos=2
    if pos==1:
        if n==0:
            size[0]+=1
        elif n==1:
            size[1]+=1
    if pos==2:
        n1=int(n/10)
        n2=n-n1*10
        if n1==1 and n2==1:
            size[1]+=2
        elif n1==1 or n2==1:
            size[1]+=1
        if n2==0:
            size[0]+=1
    if n==0 or n==1:
        return size
    elif data[n]!=[0,0]:
        return data[n]
    output0=fibonacci(n-1)
    output1=fibonacci(n-2)
    data[n]=[i+j for i,j in zip(output0,output1)]
    return data[n]

T=int(input(""))
N=[]
data=[[0,0] for _ in range(41)]
for epochs in range(T):
    N.append(int(input("")))
    
for epochs in range(T):
    printarray=fibonacci(N[epochs])
    print(printarray[0],printarray[1])  