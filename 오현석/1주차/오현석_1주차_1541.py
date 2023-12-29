eq = input().split('-')
if len(eq)==1:
    print(sum(list(map(int,str(eq[0]).split('+')))))
else:
    total_sum = sum(list(map(int,str(eq[0]).split('+'))))
    eq.pop(0)
    for i, number in enumerate(eq):
        # - 부호 뒤 값은 최대한 커져야 한다. - 뒤에 괄호를 붙인다고 생각하고
        # - 부호 뒤에서는 최댓값을 구하는 걸로 반복문 돌기 - 최댓값을 구하는 것은 
        # - 부호 뒤에서 최소값을 가지는 것.
        # i가 짝수면 빼기
        number = sum(list(map(int,str(eq[i]).split('+'))))
        total_sum -= number
    print(total_sum)
    