#include <stdio.h>
int main() {
  long T;
  scanf("%ld", &T);
  for(int i=0; i<T; i++){
    int c=0;
    char s[51];
    scanf("%s", s);
    for(int j=0; j<strlen(s); j++){
      if(s[j]=='(') c++;
      else if(s[j]==')') c--;
      if(c<0){ printf("NO\n"); break; } }
    if(c==0) printf("YES\n");
    else if(c>0) printf("NO\n");
  }
}
