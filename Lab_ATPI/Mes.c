#include <stdio.h>
#include <stdlib.h>

typedef struct data{
int dia, mes, ano;
}Tdata;

int main(void) {
  Tdata data;
  printf("\nDigite o dia:");
  scanf("%d", &data.dia);
  printf("\nDigite o mes:");
  scanf("%d", &data.mes);
  printf("\nDigite o ano:");
  scanf("%d", &data.ano);


  if(data.mes == 1)
    printf("\n%d/janeiro/%d", data.dia, data.ano);
  if(data.mes == 2)
    printf("\n%d/fevereiro/%d", data.dia, data.ano);
  if(data.mes == 3)
    printf("\n%d/março/%d", data.dia, data.ano);
  if(data.mes == 4)
    printf("\n%d/abril/%d", data.dia, data.ano);
  if(data.mes == 5)
    printf("\n%d/maio/%d", data.dia, data.ano);
  if(data.mes == 6)
    printf("\n%d/junho/%d", data.dia, data.ano);
  if(data.mes == 7)
    printf("\n%d/julho/%d", data.dia, data.ano);
  if(data.mes == 8)
    printf("\n%d/agosto/%d", data.dia, data.ano);
  if(data.mes == 9)
    printf("\n%d/setembro/%d", data.dia, data.ano);
  if(data.mes == 10)
    printf("\n%d/outubro/%d", data.dia, data.ano);
  if(data.mes == 11)
    printf("\n%d/novembro/%d", data.dia, data.ano);
  if(data.mes == 12)
    printf("\n%d/dezembro/%d", data.dia, data.ano);
  
  
  return 0;
}