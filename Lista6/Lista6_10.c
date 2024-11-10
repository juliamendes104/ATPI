#include <stdio.h>
#define n 3
#define m 10

int main(void) {
  char resp[n][m], gabar[m];
  int resul[n], cod[n], i, j, cont=0;

  for(i=0;i<n;i++){
    printf("\nDigite a matrícula do aluno:");
    scanf("%d", &cod[i]);
    for(j=0;j<m;j++){
      printf("\nDigite a resposta:");
      scanf(" %c", &resp[i][j]);
    }
  }
  for(j=0;j<m;j++){
    printf("Digite a resposta do gabarito:");
    scanf(" %c", &gabar[j]);
  }
  for(i=0;i<n;i++){
    resul[i] = 0;
    for(j=0;j<m;j++){
      if(resp[i][j] == gabar[j]){
        resul[i] += 1; 
      }
    }
  }
  for(i=0;i<n;i++){
    printf("\nMatrícula: %d", cod[i]);
    printf("\nResultado: %d", resul[i]);
    for(j=0;j<m;j++){
      printf(" %c", resp[i][j]);
    }
  }
  for(i=0;i<n;i++){
    if(resul[i] > 6){
      cont++;
    }
  }
  printf("\nAprovados: %d", cont);
  
  return 0;
}