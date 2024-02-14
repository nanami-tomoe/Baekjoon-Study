#include <stdio.h>
#include <stdlib.h>
struct tt {
  int s, e;
};
int compar(const void *a, const void *b){
  struct tt* x, *y;
  x=(struct tt*)a; y=(struct tt*)b;
  if (x->s==y->s)  return x->e - y->e;
  return x->s - y->s;
}

int main() { 
  long con;
  long result=0;
  scanf("%ld", &con);
  struct tt T[con];

  for (int i=0; i<con; i++)  //회의시간 배열에 넣기
    scanf("%d %d", &T[i].s, &T[i].e);

  qsort(T, con, sizeof(struct tt), compar); //시작시간 기준 정렬

  int temp=T[con-1].e;
  for (int j=con-1; j>=0; j--){
    if (T[j].e<=temp){
      result++;
      temp=T[j].s;
    }
  }

  printf("%ld", result);
}
