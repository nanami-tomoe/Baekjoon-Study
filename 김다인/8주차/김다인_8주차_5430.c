#include <stdio.h>

int main() {
  int T;
  scanf("%d", &T);
  for (int i=0; i<T; i++){
    
    char p[100001], g; int n, e=1; //입력받기
    scanf("%s", p); scanf("%d", &n); int x[n];
    scanf(" %c", &g);
    for (int i=0; i<n; i++) scanf("%d,", &x[i]);
    scanf(" %c", &g);

    int dir=1, len=strlen(p); //dir : 방향
    long a=0, b=n-1;
    for (long j=0; j<len; j++){
      if (p[j]=='R') dir*=-1;

      else if (p[j]=='D'){
        if (a<=b){
          if (dir==1) a++;
          else b--;
        }
        else {
          printf("error\n"); e=0; break;
        }
      }
    }
    
    if (e==1){  //출력
      if (dir==1){
        printf("[");
        if (a<=b) printf("%d", x[a]);
        for (long l=a+1; l<=b; l++) printf(",%d", x[l]);
      }
      else {
        printf("[");
        if (a<=b) printf("%d", x[b]);
        for (long l=b-1; l>=a; l--) printf(",%d", x[l]);
      }
      printf("]\n");
    }
  }
}
