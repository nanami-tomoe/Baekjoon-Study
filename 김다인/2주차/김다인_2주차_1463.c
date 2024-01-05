/* 1463번_1로 만들기_풀이중
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
