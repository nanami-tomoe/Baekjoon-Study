#include <stdio.h>
int main() {
  long N, c=0;
  scanf("%ld", &N);
  int card[N*2];
  for (int i=0; i<N; i++) card[i]=i+1;
  for (int i=0; card[i]!='\0'; i++){
    if (i%2==1){
      card[N+c]=card[i]; c++;
    }
  }
  printf("%d", card[N+c-1]);
}
