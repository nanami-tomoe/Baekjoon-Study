#include <stdio.h>
int max(long a, long b);
int main(){
  int step;
  scanf("%d", &step);long total[step];
  long score[step]; 
  for (int i=0; i<step; i++) scanf("%ld", &score[i]);
  total[0]=score[0]; total[1]=score[0]+score[1]; total[2]=max(score[0]+score[2], score[1]+score[2]);
  
  for (int i=3; i<step; i++){
    total[i]=max(total[i-2]+score[i], total[i-3]+score[i-1]+score[i]);
  }
  printf("%ld", total[step-1]);
}

int max(long a, long b){
  if (a>b) return a;
  else return b;
}
