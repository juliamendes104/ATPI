#include <stdio.h>

int main(void) {
  int A[5], B[5], C[5], i, j=4;

  for(i=0;i<5;i++){
    printf("Digite um valor:");
    scanf("%d", &A[i]);
    printf("Digite um valor:");
    scanf("%d", &B[i]);
  }
  for(i=0;i<5;i++){
    C[j] = B[j] * A[i];
    j--;
  }
  j = 4;
  for(i=0;i<5;i++){
  printf("\nC[%d] = B[%d] * A[%d] = %d", i, i, j, C[i]);
    j--;
  }
  
  return 0;
}