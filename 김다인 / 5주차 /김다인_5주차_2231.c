#include <stdio.h>
int main() {
  long N, M=0;
  scanf("%ld", &N);

  for (int i=1; i<N; i++){
    long m = i + i%10 + (i/10)%10 + (i/100)%10 + (i/1000)%10 + (i/10000)%10 + (i/100000)%10;
    if (m==N){M=i; break;}
  }
  
  printf("%ld", M);
}
