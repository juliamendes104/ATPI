#include <stdio.h>
#include <math.h>

int main(void) {
  int idade[100], tempo[100], i, cont1=0, cont2=0, m_idade;
  float salar[100], maior, soma=0, s_idade;
  
    maior = -INFINITY;
    m_idade = 0;

  for(i=0;i<3;i++){
    printf("Digite seu salário:");
    scanf("%f", &salar[i]);
    
    printf("Digite sua idade:");
    scanf("%d", &idade[i]);
    
    printf("Digite seu tempo de serviço:");
    scanf("%d", &tempo[i]);

    if(tempo[i]>38){
      cont1++;
      soma= soma + salar[i];
    }
    if(idade[i]>65){
      cont2++;
    }
    
    if(salar[i]>maior){
      maior = salar[i];
      }
    
    if(idade[i]>m_idade){
      m_idade = idade[i];
      s_idade = salar[i];
    }
  }
  printf("\nNúmero de funcionários com mais de 38 anos de serviço:%d", cont1);
  printf("\nNúmero de funcionários com idade acima de 65 anos:%d", cont2);
  printf("\nO maior salário:%.2f", maior);
  printf("\nO salário do funcionário mais velho: %.2f", s_idade);
  printf("\nO salário médio dos funcionários com mais de 38 anos de serviço: %.2f", ((float)soma/cont1));
  
}