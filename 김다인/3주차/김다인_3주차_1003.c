#include <stdio.h>
int main(){
  int T;
  scanf("%d", &T);
  
  for (int i=0; i<T; i++){
    int N;
    scanf("%d", &N);
    int c0[N+1]; c0[0]=1; c0[1]=0;
    int c1[N+1]; c1[0]=0; c1[1]=1;
    for (int j=2; j<N+1; j++){
      c0[j]=c0[j-2]+c0[j-1];
      c1[j]=c1[j-2]+c1[j-1];
    }
    printf("%d %d\n", c0[N], c1[N]);
  }
}
