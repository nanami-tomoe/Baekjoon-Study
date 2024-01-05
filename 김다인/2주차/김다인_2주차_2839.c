/* 2839번 설탕배달 _ 성공
풀이 : 
1.N 입력 받기
2.for문으로 나머지값을 +5 해가며 최소값 찾기
3.else 3으로 나누기 or -1 */

#include <stdio.h>
#include <stdlib.h>
int main() {
  int N, i;
  scanf("%d", &N);

  for (i = 0; i < 5; i++) {
    int result=0, n;
    result += div(N, 5).quot - i;
    if (result>=0){
      n = div(N, 5).rem + i * 5;
      if (div(n, 3).rem == 0) {
        printf("%d", result + div(n, 3).quot);
        break;
      }
      else if (div(N, 3).rem == 0) {
        printf("%d", div(N, 3).quot);
        break;
      }
    }
  }
  if (i==5) printf("-1");
}
/* =>실패
재고 : 3의 배수일 때 최소값을 찾기 전에 else if문이 실행됨, for문 밖으로 이동 */

#include <stdio.h>
#include <stdlib.h>
int main() {
  int N, i;
  scanf("%d", &N);

  for (i = 0; i < 5; i++) {
    int result=0, n;
    result += div(N, 5).quot - i;
    if (result>=0){
      n = div(N, 5).rem + i * 5;
      if (div(n, 3).rem == 0) {
        printf("%d", result + div(n, 3).quot);
        break;
      }
    }
  }
  
  if (i==5){
    if (div(N, 3).rem == 0) printf("%d", div(N, 3).quot);
    else printf("-1");
  }
}
// =>성공
