#include <stdio.h>
#define n 2

int main(void) {
  float M[n][n], A[n][n], C[n][n], soma, sub;
  int i, j, menu, cons;

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("Digite um valor:");
      scanf("%f", &M[i][j]);
      scanf("%f", &A[i][j]);
    }
  }
  do{
    printf("\n\n1.Somar as matrizes");
    printf("\n2.Subtrair as matrizes");
    printf("\n3.Adicionar uma constante");
    printf("\n4.Imprimir as matrizes.");
    scanf("%d", &menu);

    if(menu == 1){
      for(i=0;i<n;i++){
        for(j=0;j<n;j++){
          soma = M[i][j] + A[i][j];
          C[i][j] = soma;
        }
      }
    }
    else if(menu == 2){
      for(i=0;i<n;i++){
        for(j=0;j<n;j++){
          sub = M[i][j] - A[i][j];
          C[i][j] = sub;
        }
      }
    }
    else if(menu == 3){
      printf("\nDigite uma constante:");
      scanf("%d", &cons);
      for(i=0;i<n;i++){
        for(j=0;j<n;j++){
          M[i][j] += cons;
          A[i][j] += cons;
        }
      }
    }
    else{
      for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++){
          printf(" %.2f", M[i][j]);
        }
      }
      for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++){
          printf(" %.2f", A[i][j]);
        }
      }
      for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++){
          printf(" %.2f", C[i][j]);
        }
      }
    }
    
    }while(menu<5 && menu>0);

  return 0;
}