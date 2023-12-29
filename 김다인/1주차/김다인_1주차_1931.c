/* 1931번 회의실 배정 _ 풀이중
풀이 :
1. 시작시간 빠른 순서대로 정렬 (같을 경우, 끝나는 시간이 느린 회의가 앞으로)
2.앞 회의의 끝나는 시간이 더 늦을 경우 해당 회의 삭제 (-1로 표시)
3.앞 회의의 끝나는 시간이 뒷 회의의 시작시간보다 늦을 경우 회의 삭제 */

#include <stdio.h>
void Switch(int x, int list[x][2], int a, int b);

int main() { 
  long con;
  long result=1;
  scanf("%ld", &con);
  int timeTable[con][2];

  for (int i=0; i<con; i++){  //회의시간 배열에 넣기
    long start, finish;
    scanf("%ld %ld", &start, &finish);
    timeTable[i][0]=start; timeTable[i][1]=finish;
  }

  for (int i=0; i<con-1; i++){  //시작시간 기준 정렬
    for (int j=i+1; j<con; j++){
      if (timeTable[i][0]>timeTable[j][0])
        Switch(con, timeTable, i, j);
      else if (timeTable[i][0]==timeTable[j][0] && timeTable[i][1]<timeTable[j][1])
        Switch(con, timeTable, i, j);
    }
  }

  for (int i=1; i<con-1; i++){  //회의 삭제
    if (timeTable[i-1][1]>timeTable[i][1])
      timeTable[i-1][0] = -1;
  }

  int temp, i;
  for (i=0; i<con; i++){
    if (timeTable[i][0]>=0){
      temp=timeTable[i][1];
      break;
    }
  }
  for (int j=i; j<con; j++){
    if (timeTable[j][0]>=0 && timeTable[j][0]>=temp){
      result++;
      temp=timeTable[j][1];
    }
  }
  
  printf("%ld", result);
}

void Switch(int x, int list[x][2], int a, int b){
  int temp1 = list[a][0];
  list[a][0]=list[b][0];
  list[b][0]=temp1;
  int temp2 = list[a][1];
  list[a][1]=list[b][1];
  list[b][1]=temp2;
}
/* ⇒시간 초과

재고 :
잦은 for문으로 시간 초과가 났을 것으로 판단, for문을 줄일 수 있는 알고리즘 탐색 */
