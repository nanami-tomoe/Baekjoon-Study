def d(n):
    return n + sum(map(int, str(n)))

self_numbers = [True for _ in range(10000)]

for i in range(10000):
    self_numbers[d(i) if d(i) < 10000 else 9999] = False

for i in range(10000):
    if self_numbers[i]:
        print(i)

#처음에는 그냥 11로 더하는걸로 생각 ㅋㅋ
#d(n), d(d(n)), d(d(n))...을 한 시행에 모두 찾으려고 했던 것이 접근의 실수였던 것 같다.