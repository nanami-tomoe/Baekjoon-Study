#include <stdio.h>
int M, min=9999, N, c=-1, h=-1, city[51][51];
struct house { int x; int y; };
struct chicken { int x; int y; };
struct house H[9999]; struct chicken C[9999], list[9999];
 
int dis(struct house h, struct chicken c){
  int x=0, y=0;
  if (h.x>=c.x) x+=h.x-c.x;
  else x+=c.x-h.x;
  if (h.y>=c.y) y+=h.y-c.y;
  else y+=c.y-h.y;
  return x+y;
}
void DFS(int s, int L);

int main() {
  scanf("%d %d", &N, &M);
  for (int i=0; i<N; i++){ //도시정보입력&위치저장
    for (int j=0; j<N; j++) {
      scanf("%d", &city[i][j]);
      if (city[i][j]==1){ C[++c].x=i; C[c].y=j; }
      else if (city[i][j]==2){ H[++h].x=i; H[h].y=j; }
    } }

  DFS(0, 0);
  printf("%d", min);
}

void DFS(int s, int L){
  if (L == M){
    for (int i=0; i<M; i++){ //치킨집 선택
      int D=0;
      for (int j=0; j<h; j++){ //집에서 가장 까가운 치킨집 찾기
        int mi=9999;
        for (int k=0; k<M; k++){
          int d=dis(H[j], list[k]);
          if (mi > d) mi=d;
        }
        D += mi;
      }
      if (min>D) min=D;
    }
  }
  else {
    for (int i=s; i<c; i++){
      list[L] = C[i];
      DFS(i+1, L+1);
    }
  }
}
