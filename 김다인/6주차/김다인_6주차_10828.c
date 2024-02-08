#include <stdio.h>
int main() {
  int N; long len=0, stack[10001];
  scanf("%d", &N);
  
  for(int i=0; i<N; i++){
    char order[6];
    scanf("%s", &order);
    
    if (order[1]=='u'){ //push X
      long num;
      scanf("%ld", &num);
      stack[len]=num; len++;
    }
      
    else if (order[0]=='p'&&order[1]=='o'){ //pop
      if (len!=0){ printf("%ld\n",stack[len-1]); stack[len-1]='\0'; len--; }
      else printf("-1\n");
    }
      
    else if (order[0]=='s') printf("%ld\n",len); 
      
    else if (order[0]=='e'){ //empty
      if (len==0) printf("1\n");
      else printf("0\n");
    }

    else if (order[0]=='t'){ //top
      if (len!=0) printf("%ld\n",stack[len-1]);
      else printf("-1\n");
    }
  }
}
