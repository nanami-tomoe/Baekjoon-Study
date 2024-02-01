N=int(input())
stack=[]
size=0
a=[]
for i in range(N):
    a.append(input())
for i in range(N):
    if(a[i][:4]=="push"):
        size+=1
        stack.append(a[i][5:])
    elif(a[i]=="pop"):
        if size<=0:
            print(-1)
        else:
            size-=1
            print(stack.pop())
    elif(a[i]=="top"):
        if size<=0:
            print(-1)
        else:
            print(stack[-1])
    elif a[i]=="size":
        print(size)
    elif a[i]=="empty":
        if(size<=0):
            print(1)
        else:
            print(0)
    else:
        continue

    