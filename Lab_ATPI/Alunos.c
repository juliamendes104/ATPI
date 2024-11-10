#include <stdio.h>
#include <string.h>
#define n 4

int main(void) {
  int idade[n], i, soma1=0, maior, menor, cont1=0;
  float altura[n], soma2=0, cont2=0;

  for(i=0;i<n;i++){
    printf("\nDigite a altura do aluno:");
    scanf("%f", &altura[i]);
    printf("\nDigite a idade do aluno:");
    scanf("%d", &idade[i]);
    }
  maior = idade[0];
  menor = idade[0];
  
  for(i=0;i<n;i++){
    if(altura[i] < 1.7){
      soma1= soma1 + idade[i];
      cont1++;
    }
    if(idade[i] > 20){
      soma2 = soma2 + altura[i];
      cont2++;
    }
    if(idade[i] > maior) maior = idade[i];
    if(idade[i] < menor) menor = idade[i];
    }
  printf("\nIdade média dos alunos com menos de 1.70: %d", soma1/cont1);
  printf("\nAltura média dos alunos com mais de 20 anos: %.2f", soma2/cont2);
  printf("\nIdade do aluno mais velho: %d", maior);
  printf("\nIdade do aluno mais novo: %d", menor);
  
  }