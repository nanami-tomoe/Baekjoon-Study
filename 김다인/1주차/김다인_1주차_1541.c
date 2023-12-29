/* 풀이 :
1.식 문자열 형태로 받기
2.total에 수 더하기 (문자→숫자 변환 과정 필요)
3.’-’ 이후의 숫자들은 모두 뺄셈이므로 break 후 뺄셈 반복문 실행 */

#include <stdio.h>
int main() {
  long long total = 0;
  char equa[51];
  scanf("%s", equa);

  int index;
  for (index = 0; equa[index] != '\0'; index++) {
    long long num = 0;
    for (int i = index; equa[i] != '+' && equa[i] != '-' && equa[i] != '\0';
         i++, index++) { //문자->숫자 변환
      if (equa[i] >= '0' && equa[i] <= '9')
        num = num * 10 + equa[i] - '0';
    }
    total += num;
    if (equa[index] == '-')
      break;
  }
  
  if (equa[++index] != '\0') {
    for (; equa[index] != '\0'; index++) {
      long long num = 0;
      for (int i = index; equa[i] != '+' && equa[i] != '-' && equa[i] != '\0';
          i++, index++) { //문자->숫자 변환
        if (equa[i] >= '0' && equa[i] <= '9')
          num = num * 10 + equa[i] - '0';
      }
      total -= num;
    }
  }

  printf("%lld", total);
  return 0;
}
// ⇒성공
