#include <stdio.h>
int main() {
  int N, M;
  scanf("%d %d", &N, &M);
  int num[N];
  long Sn[N+1];
  for (int i=0; i<N; i++) scanf("%d", &num[i]);
  Sn[0]=0;
  for (int i=1; i<N+1; i++) Sn[i]=Sn[i-1]+num[i-1];
  for (int a=0; a<M; a++){
    int i, j;
    scanf("%d %d", &i, &j);
    printf("%ld\n", Sn[j]-Sn[i-1]);
  }
}
