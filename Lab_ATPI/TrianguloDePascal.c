#include <stdio.h>
#define N 10
//Triângulo de Pascal
int main(void) {
  int i, j, pascal[N][N];

  for (i=0; i<N; i++)
  {
    for (j=0; j<=i; j++)
    {
      if (j==0 || i==j)
        pascal[i][j] = 1;
      else
        pascal[i][j] = pascal[i-1][j] + pascal[i-1][j-1];
    printf("%d ", pascal[i][j]);
    }
    printf("\n");
  }
}