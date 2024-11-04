#include <stdio.h>

int main(void) {
  int vot, cont1=0, cont2=0, cont3=0, cont4=0, cont5=0, cont6=0;
  float total;

  do{
  printf("Eleição presidencial:\n\n");
  printf("1.Candidato 1\n");
  printf("2.Candidato 2\n");
  printf("3.Candidato 3\n");
  printf("4.Candidato 4\n");
  printf("5.Voto nulo\n");
  printf("6.Voto em branco\n");
  printf("0.Finalizador\n");
  do{
    printf("Escolha uma opção:");
    scanf("%d", &vot);
    if(vot<0 || vot>6){
     printf("Opção inválida\n");
      }
    }while(vot<0 || vot>6);
    if(vot != 0){
      switch(vot){
        case 1:cont1++; break;
        case 2:cont2++; break;
        case 3:cont3++; break;
        case 4:cont4++; break;
        case 5:cont5++; break;
        case 6:cont6++; break;
      }
    }
    }while(vot != 0);
  printf("Conjunto de votos finalizados.");
  total = cont1 + cont2 + cont3 + cont4 + cont5 + cont6;
  printf("\nTotal de votos Candidato1: %d", cont1);
  printf("\nTotal de votos Candidato2: %d", cont2);
  printf("\nTotal de votos Candidato3: %d", cont3);
  printf("\nTotal de votos Candidato4: %d", cont4);
  printf("\nTotal de votos nulos: %d", cont5);
  printf("\nTotal de votos em branco: %d", cont6);
  printf("\nPercentual dos votos nulos e brancos: %f.2", ((float)cont5 + cont6)/(total) * 100);
  
}