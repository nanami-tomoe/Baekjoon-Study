# 컴알에서 선분 안 겹치게 하기랑 비슷
def check_time(new):
    global end_time
    if end_time <= new[0]:
        end_time = new[1]
        return 1
    else:
        return 0

num = int(input())    # 입력받는 횟수
time_table = []
for _ in range(num):
    time_table.append(list(map(int,input().split(' '))))

time_table.sort(key=lambda x: (x[1], x[0]))
current_table = set()
count = 0
end_time = 0
for i in range(num):
    count += check_time(time_table[i])
print(count)