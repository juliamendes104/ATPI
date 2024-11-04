#include <stdio.h>
#include <math.h>

int main(void) {
  float alt_F, alt_M, soma=0, maiorF, menorF, maiorM, menorM, dif;
  char sexo;
  int i, j=0, m=0;
  maiorF = -INFINITY;
  maiorM = -INFINITY;
  menorF = INFINITY;
  menorM = INFINITY;

  for (i=1; i<3; i++){
  printf("Digite seu sexo: M ou F");
  scanf(" %[^\n]c", &sexo);

    if(sexo == 'F'){
      printf("Digite sua altura:");
      scanf("%f", &alt_F);
      soma = soma + alt_F;
      j++;
      if(alt_F < menorF) menorF = alt_F;
      if(alt_F > maiorF) maiorF = alt_F;  
    } else if (sexo == 'M'){
      printf("Digite sua altura:");
      scanf("%f", &alt_M);
      m++;
      if(alt_M < menorM) menorM = alt_M;
      if(alt_M > maiorM) maiorM = alt_M;
    } else {
      printf("\nInválido");
    }
    }
  //a)
  printf("\nA maior altura feminina é %.2f. A menor é %.2f", maiorF, menorF);
  printf("\nA maior altura masculina é %.2f. A menor é %.2f", maiorM, menorM);
  //b)
  printf("\nMédia da altura das mulheres: %.2f", soma/j);
  //c)
  dif = (m - j) / (m + j)*100;
  printf("\nNúmero de homens: %d. Diferença dos homens e mulheres em porcentagem: %.2f", m, dif);
}