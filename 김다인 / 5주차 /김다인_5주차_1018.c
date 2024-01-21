#include <stdio.h>
int main() {
  char chess[2][8]={{'B','W','B','W','B','W','B','W'},{'W','B','W','B','W','B','W','B'}};
  int M, N, min = 2000;
  scanf("%d %d", &M, &N);
  char board[M][N];
  for (int i=0; i<M; i++){
    scanf("%s", board[i]);
  }
  
  for (int i=0; i<M-7; i++){
    for (int j=0; j<N-7; j++){
      for (int l=0; l<2; l++){
        int count=0;
        for (int k=0; k<8; k++){
          for (int m=0; m<8; m++){
            if (board[i+k][j+m]!=chess[(l+k)%2][m]) count++;
          } }
        if (count<min) min=count;
      } } }
  printf("%d", min);
}
