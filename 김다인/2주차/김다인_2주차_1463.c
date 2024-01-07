/* 1463번_1로 만들기_성공
풀이 :
3n일 때 %3
3n+1일 때 -1
3n+2 홀수일 때 -1, 짝수일 때 %2 */

#include <stdio.h>
#include <stdlib.h>
int main() {
long X;
int count=0;
scanf("%ld", &X);

while (X != 1){
if (div(X,3).rem == 0){
X /= 3; count++;
}
else if (div(X,3).rem==2 && div(X,2).rem==0){
X /= 2; count++;
}
else{
X--; count++;
}
}
printf("%d", count);
}
/* ⇒실패
재고 :
16(3n+1)일 때는 ÷2를 먼저 해야 하는 등의 예외 존재
배열에 연산 방법에 따른 최소값을 저장, 비교해야 함 */

#include <stdio.h>
#include <stdlib.h>
int min(int a, int b);
int main() {
  long X;
  scanf("%ld", &X);
  int count[X+1];
  count[0]=0, count[1]=0, count[2]=1; //1->0번, 2->1번

  for (int i=3; i<=X; i++){
    if ((div(i,2).rem==0) && (div(i,3).rem==0)) count[i]=min(min(count[i-1]+1,count[i/2]+1), min(count[i-1]+1,count[i/3]+1));
    else if (div(i, 2).rem==0) count[i]=min(count[i-1]+1, count[i/2]+1);
    else if (div(i, 3).rem==0) count[i]=min(count[i-1]+1, count[i/3]+1);
    else count[i]=count[i-1]+1;
  }
  printf("%d", count[X]);
}
int min(int a, int b){
  if (a>b) return b;
  else return a;
}
// =>성공
