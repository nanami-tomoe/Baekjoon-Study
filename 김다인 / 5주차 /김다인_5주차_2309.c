#include <stdio.h>
int main() {
  int sho[9], total=0; 
  for (int i=0; i<9; i++){
    scanf("%d", &sho[i]);
    total+=sho[i];
  }
  
  for (int i=0; i<8; i++){ //100이되는 경우
    for (int j=i+1; j<9; j++){
      if ((total-sho[i]-sho[j])==100){
        sho[i]=100; sho[j]=100; i=8;
      }
    }
  }
  
  for (int i=0; i<7; i++){ //오름차순 출력
    int min=sho[0], index=0;
    for (int j=1; j<9; j++){
      if (min>sho[j]){ min=sho[j]; index=j; }
    }
    printf("%d\n", min);
    sho[index]=100;
  }
}
