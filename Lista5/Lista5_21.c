#include <stdio.h>
#define n 2

int main(void) {
int i, fone[n], diar[n], total[n], t_hot=0, t_diar=0, codigo[i];
char nome[n][30], adress[n][30], city[n][10], state[n][10];

  for (i=0; i<n; i++){
    
    printf("\nRegistro\nNome:");
    scanf(" %[^\n]s", nome[i]);
    printf("\nCódigo:");
    scanf("%d", &codigo[i]);
    printf("\nEndereço:");
    scanf(" %[^\n]s", adress[i]);
    printf("\nCidade:");
    scanf(" %[^\n]s", city[i]);
    printf("\nEstado:");
    scanf(" %[^\n]s", state[i]);
    printf("\nTelefone:");
    scanf("%d", &fone[i]);
    printf("\nNúmero de diárias:");
    scanf("%d", &diar[i]);

    if (diar[i] < 15){
      total[i] = diar[i] * 300 + 20;
    }
    else if (diar[i] == 15){
      total[i] = diar[i] * 300 + 14;
    }
    else{
      total[i] = diar[i] * 300 + 12;
    }
    t_hot = t_hot + total[i];
    t_diar = t_diar + diar[i]; 
  }
  printf("\n\n\t\t\tLista de Hóspedes");
    printf("\n\t\tCódigo\t\tNome\t\tEndereço\t\tFone\t\tE-mail\t\tNDiárias\t\tConta(total)");
  
  for(i=0;i<n;i++){
    printf("\n\t\t\t%d\t\t\t%s\t\t\t%s\t\t\t%d\t\t\t%s\t\t\t%d\t\t\t%d", codigo[i], nome[i], adress[i], fone[i], city[i], diar[i], total[i]);
  }
  printf("\nTotal:\t\t\t%d\t\t\t%d", t_diar, t_hot);
  
}