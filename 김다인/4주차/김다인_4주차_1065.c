#include <stdio.h>
int main() {
  int N, c = 0;
  scanf("%d", &N);

  for (int i = 1; i <= N; i++) {
    if (i < 100) {
      c++;
      continue;
    } else if (i < 1000) {
      if ((i % 10) - ((i / 10) % 10) == ((i / 10) % 10) - ((i / 100) % 10))
        c++;
    }
  }

  printf("%d", c);
}
