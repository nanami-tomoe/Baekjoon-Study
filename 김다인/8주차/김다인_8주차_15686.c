#include <stdio.h>
struct house { int x; int y; };
struct chicken { int x; int y; };

int dis(struct house h, struct chicken c){
  int x=0, y=0;
  if (h.x>=c.x) x+=h.x-c.x;
  else x+=c.x-h.x;
  if (h.y>=c.y) y+=h.y-c.y;
  else y+=c.y-h.y;
  return x+y;
}

int main() {
  int N, M, c=-1, h=-1;
  scanf("%d %d", &N, &M);
  struct house H[N*N]; struct chicken C[N*N];
  int city[N][N];

  for (int i=0; i<N; i++){ //도시정보입력&위치저장
    for (int j=0; j<N; j++) {
      scanf("%d", &city[i][j]);
      if (city[i][j]==1){ C[++c].x=i; C[c].y=j; }
      else if (city[i][j]==2){ H[++h].x=i; H[h].y=j; }
    } }

  //cCm 경우의 수 구현 -> 거리의 합 D[]에 저장
  
  /*int D[cCm];
  int min=D[0];
  for (int i=1; i<cCm; i++){
    if (min>D[i]) min=D[i];
  }
  printf("%d", min);
  */
}
