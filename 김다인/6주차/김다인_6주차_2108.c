#include <stdio.h>
#include <stdlib.h>
int compar(const void *a, const void *b){return (*(int*)a-*(int*)b);}

int main() {
  long N, sum=0;
  scanf("%ld", &N);
  int num[N], a[8001]={0,};
  
  for(long i=0; i<N; i++){
    scanf("%d", &num[i]);
    sum+=num[i];
    a[num[i]+4000]++;
  }
  if (sum>=0) printf("%d\n", (long)((double)sum/N+0.5)); //산술평균
  else printf("%d\n", (long)((double)sum/N-0.5));

  qsort(num, N, sizeof(int), compar); //중앙값
  printf("%d\n", num[(N-1)/2]);

  long max=num[0]+4000; //최빈값
  for (long i=max+1; i<num[N-1]+4001; i++){
    if (a[max]<a[i]) max=i;
  }
  for (long i=max+1; i<8002; i++){
    if (a[max]==a[i]){ max=i; break; } 
  }
  printf("%ld\n", max-4000);
  
  printf("%d\n", num[N-1]-num[0]); //범위
}
