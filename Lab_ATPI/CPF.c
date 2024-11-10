#include <stdio.h>

int main(void) {
  char sCPF[12], c;
  int CPF[11], i, flag=0, soma1 =0, resto1, soma2=0, resto2;//vetor de interios não precisa de \0

  printf("Digite um CPF (sem pontos e traços)");
  scanf("%s", sCPF);

  for (i=0; i<11; i++){
    c = sCPF[i];
    CPF[i] = c - '0';//Conversão de caracteres para inteiros
    //atoi X=atoi(S); \0
    //temos o vetor com os elementos
  }
  for(i=0;i<10;i++){
    if(CPF[i] != CPF[i+1])flag = 1;
    }
  
  if(flag == 1){
    for(i=0;i<9;i++){
       soma1 = soma1 + (CPF[i] * (10-i));
      }
      resto1 = (10 * soma1) % 11;
      if(resto1 == 10)//dígito verificador deve ser zero
        resto1 = 0;
      if(resto1 != CPF[9]){//resto deve ser igual ao dígito verificador
        printf("CPF Inválido");
        return 0;
          }
    
    for(i=0;i<10;i++){
       soma2 = soma2 + (CPF[i] * (11-i));
      }
      resto2 = (10 * soma2) % 11;
      if(resto2 == 10)//dígito verificador deve ser zero
        resto2 = 0;
      if(resto2 != CPF[10]){//resto deve ser igual ao dígito verificador
        printf("CPF Inválido");
        return 0;
    }
      
  
    //O CPF é formado por números distintos
    printf("CPF válido!");  
  }
    else{
      printf("Dígitos iguais");
    }
  return 0;
}