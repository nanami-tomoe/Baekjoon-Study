#include <stdio.h>
int main(){
  int N; long M, c=0;
  scanf("%d %ld", &N, &M);
  //nC3 = n!/(n-3)!/3!
  long nCr=N*(N-1)*(N-2)/6;
  int nums[N]; long total[nCr];
  for (int i=0; i<N; i++) scanf("%d", &nums[i]);

  for (int j=0; j<N-2; j++){
    for (int k=j+1; k<N-1; k++){
      for (int l=k+1; l<N; l++){
        total[c]=nums[j]+nums[k]+nums[l];
        c++;  }}}

  long max, m;
  for (m=0; m<nCr; m++){
    if (total[m]<=M) {
      max=total[m]; break;
    }
  }
  for (long i=m; i<nCr; i++){
    if (total[i]<=M && max<total[i]) max=total[i];
  }
  printf("%ld", max);
  
}
