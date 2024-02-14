N,M = map(int, input().split())
board = [list(input()) for _ in range(N)]

answer = []
for a in range(N-7):
    for b in range(M-7):
        idx1 = 0
        idx2 = 0
        for i in range(a, a+8):
            for j in range(b, b+8):
                if (i+j) % 2 == 0:
                    if board[i][j] != 'W': idx1 += 1
                    if board[i][j] != 'B': idx2 += 1
                else :
                    if board[i][j] != 'B': idx1 += 1
                    if board[i][j] != 'W': idx2 += 1
        answer.append(idx1)
        answer.append(idx2)

print(min(answer))