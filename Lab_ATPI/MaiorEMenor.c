#include <stdio.h>
#include <math.h>
//infinity -infinity
int main(void) {
  float A[3][4], maior, menor, S[3] = {0, 0, 0};
  int i,j;

  //a)
//Pode ou não usar chave no for externo
  for (i=0; i<3; i++)
    for (j=0; j<4; j++){
      printf("Digite A[%d][%d]", i, j);
      scanf("%f", &A[i][j]);
    }
    

  menor = A[0][0];
  maior = A[0][0];
  
  for (i=0;i<3;i++){ 
    for (j=0;j<4;j++){
      if (A[i][j] < menor) menor = A[i][j];
      if (A[i][j] > maior) maior = A[i][j];
    S[i] = S[i] + A[i][j];
    }
       printf("Soma: %f\n", S[i]);
    }
  printf("maior: %f e menor %f", maior, menor);
  //Maior infinito é maior que qualquer número// Menor infinito é menor que qualuqer número
  return 0;

  //b)
}