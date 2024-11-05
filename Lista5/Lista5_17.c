#include <stdio.h>

int main(void) {
  int A[10], B[10], i;

  for(i=0; i<10; i++){
    printf("Digite um valor:");
    scanf("%d", &A[i]);
  }
  for(i=0; i<10; i++){
    if (A[i] > 0){
			B[i]=A[i];
      }
    else{
      B[i]=0;
    }
  }
  for (int i=0;i<10; i++)
		printf("\n Valores de A[%d]->%d e B[%d]->%d",i,A[i],i,B[i]);
}