#include <stdio.h>
#include <stdlib.h>
#define n 10

int main(void) {
  float sala_i[n], reaj[n], total_sala_i=0, total_reaj=0;
  char nome[n][40], resp;
  int i=0, codigo[n];

  do{

    printf("\nDigite o código:");
    scanf("%d", &codigo[i]);
    printf("\nDigite o salário:");
    scanf("%f", &sala_i[i]);
    printf("\nDigite o nome:");
    scanf(" %[^\n]s", nome[i]);

    total_sala_i += sala_i[i];

  if (sala_i[i] < 500){
    reaj[i] = sala_i[i] * 1.15;
  }
  else if(sala_i[i] >= 500 && sala_i[i] <= 1000){
    reaj[i] = sala_i[i] * 1.1;
  }
  else{
    reaj[i] = sala_i[i] * 1.05;
  }

    total_reaj += reaj[i];
    
    printf("\n\nDeseja continuar? <s> ou <n>");
    scanf(" %c", &resp);
    i++;
  }while(resp == 's');

  printf("\n\t\t\tLista dos Funcionários da Empresa");
  printf("\n\t\tCódigo\tNome\t\t\tSal.Base\tSal.Reajustado");

  for(i=0;i<n;i++){
    printf("\n\t\t%d\t%s\t\t\t%.2f\t\t\t%.2f", codigo[i], nome[i], sala_i[i], reaj[i]);
  }
  printf("\n\nTotal:\t\t\t\t\t\t%.2f\t\t\t%.2f", total_sala_i, total_reaj);
  
  return 0;
}