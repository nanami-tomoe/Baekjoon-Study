N = int(input())
list_N = []
for _ in range(N):
    weight, height = map(int, input().split())
    list_N.append((weight, height))

rank = []
for i in range(N):
    cnt = 1
    for j in range(N):
        if i == j:
            continue
        if list_N[i][0] < list_N[j][0] and list_N[i][1] < list_N[j][1]:
            cnt += 1
    rank.append(cnt)

for r in rank:
    print(r, end=' ')
