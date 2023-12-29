# 컴알에서 선분 안 겹치게 하기랑 비슷
def check_time(new, exist):
    if new[0]==new[1]:
        exist.update(new[0])
        return 1
    if set(range(new[0],new[1])) & exist:
        return 0
    else:
        exist.update(range(new[0],new[1]))
        return 1

num = int(input())    # 입력받는 횟수
time_table = []
for _ in range(num):
    time_table.append(list(map(int,input().split(' '))))

time_table.sort(key=lambda x: (x[1] - x[0]))
current_table = set()
count = 0
for i in range(num):
    count += check_time(time_table[i], current_table)
# print(time_table)
# print(current_table)
print(count)