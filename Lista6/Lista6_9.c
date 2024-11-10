#include <stdio.h>
#define n 2
#define m 4

int main(void) {
  char resp[n][m], gabar[m];
  int resul[m], i, j;
  resul[0] = 0;

  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      printf("Digite a resposta do aluno:");
      scanf(" %c", &resp[i][j]);
    }
  }
  for(j=0;j<m;j++){
    printf("\nDigite a resposta do gabarito:");
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
    printf("\n%d", resul[i]);
  }

  
  return 0;
}