#include <stdio.h>
#include <stdlib.h>
int compar(const void *a, const void *b){return (*(int*)a-*(int*)b);}

int main() {
  long N;
  scanf("%ld", &N);
  long num[N];
  for (long i=0; i<N; i++) scanf("%ld", &num[i]);
  qsort(num, N, sizeof(long), compar);
  for (long i=0; i<N; i++) printf("%ld\n", num[i]);
}
