/* 풀이 : 
1.가장 싼 가격의 도시 n 찾기, total에 싼가격도시*이후 거리 더하기, 도시 n가격 0으로 초기화
2.n의 이전 도시에서 가장 싼 가격 찾기 … (반복)
고려할 점) 마지막 도시의 가격이 가장 쌀 경우, 초기에 마지막 도시 가격 0으로 미리 초기화 */

#include <stdio.h>
static int CITY_N;
int min(int p[]);
int main() {
  unsigned long long total = 0;
  scanf("%d", &CITY_N);
  int dis[CITY_N - 1], prize[CITY_N];
  for (int i=0; i<CITY_N-1; i++) //거리 입력
    scanf("%d", &dis[i]);
  for (int i=0; i<CITY_N; i++) //가격 입력
    scanf("%d", &prize[i]);
  prize[CITY_N-1]=0;
  
  while (prize[0] != 0) {
    int min_p_i = min(prize);
    int remain_d=0;
    for (int i=min_p_i; prize[i]!=0; i++)  //남은 거리
      remain_d += dis[i];
    total += prize[min_p_i] * remain_d;
    prize[min_p_i]=0;
  }
  printf("%llu", total);
}

int min(int p[]) {  //가장 싼 가격의 도시 인덱스 찾기 (마지막 도시 제외)
  int temp = 0;
  for (int i=1; p[i]!=0; i++) {
    if (p[temp] > p[i])
      temp = i;
  }
  return temp;
}
/* ⇒ 부분성공(58점)

재고:
큰 값을 넣었을 때 예상값과 다른 결과가 나옴, remain_d에서 오버플로우가 일어난 것으로 예상
다음으로 싼 가격을 찾을 때마다 min 함수(for문)를 사용해야 함, 순서를 뒤→앞에서 앞→뒤로 변경 */

#include <stdio.h>
int main() {
  int CITY_N;
  long long total = 0;
  scanf("%d", &CITY_N);
  long long dis[CITY_N - 1], prize[CITY_N];
  for (int i=0; i<CITY_N-1; i++) //거리 입력
    scanf("%lld", &dis[i]);
  for (int i=0; i<CITY_N; i++) //가격 입력
    scanf("%lld", &prize[i]);
  prize[CITY_N-1]=0;

  for (int i=0, p=prize[0]; i<CITY_N-1; i++) {
    total += p * dis[i];
    if (p>prize[i+1]) p=prize[i+1];
  }
  printf("%lld", total);
}
// ⇒성공
