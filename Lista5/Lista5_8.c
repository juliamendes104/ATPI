#include <stdio.h>

int main(void) {
  int op, cont1=0, cont2=0, cont3=0, cont4=0, cont5=0, resp, resp2, resp3, resp4, resp5;
  do{
    printf("\n1.Aumentar estoque");
    printf("\n2.Baixar estoque");
    printf("\n3.Visualizar estoque de um produto");
    printf("\n4.Visualizar estoque total");
    printf("\n5.Trocar produto");
    printf("\n6.Sair");
    scanf("%d", &op);

    if(op<1 || op>6){
      printf("Opção inválida.");
    }
    else{
      if(op==1){
        printf("Aumentar o estoque do produto: 1, 2, 3, 4 ou 5?");
        scanf("%d", &resp);
        if(resp==1)cont1++;
        if(resp==2)cont2++;
        if(resp==3)cont3++;
        if(resp==4)cont4++;
        if(resp==5)cont5++;
      }
      else if(op==2){
        printf("Diminuir o estoque do produto: 1, 2, 3, 4 ou 5?");
        scanf("%d", &resp2);
        if(resp2==1)cont1--;
        if(resp2==2)cont2--;
        if(resp2==3)cont3--;
        if(resp2==4)cont4--;
        if(resp2==5)cont5--;
      }
      else if(op==3){
        printf("Visualizar o estoque de qual produto?");
        scanf("%d", &resp3);
        if(resp3==1)
          printf("%d", cont1);
        if(resp3==2)
          printf("%d", cont2);
        if(resp3==3)
          printf("%d", cont3);
        if(resp3==4)
          printf("%d", cont4);
        if(resp3==5)
          printf("%d", cont5);
      }
      else if(op==4){
        printf("%d", cont1+cont2+cont3+cont4+cont5);
      }
      else if(op==5){
        printf("Trocar o produto: 1, 2, 3, 4 ou 5?");
        scanf("%d", &resp4);
        if(resp4==1)cont1++;
        if(resp4==2)cont2++;
        if(resp4==3)cont3++;
        if(resp4==4)cont4++;
        if(resp4==5)cont5++;
      }
      printf("Pelo produto: 1, 2, 3, 4 ou 5?");
      scanf("%d", &resp5);
      if(resp5==1)cont1--;
      if(resp5==2)cont2--;
      if(resp5==3)cont3--;
      if(resp5==4)cont4--;
      if(resp5==5)cont5--;
      
    }
    }while(op != 6);
  return 0;
}