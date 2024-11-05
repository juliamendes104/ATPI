#include <stdio.h>
#define max 5

int main()
{
  int i, A[max], B[max], C[max], D[max], soma_A=0, soma_B=0;

  for(i=0; i<max; i++){
    printf("Digite um valor para a posição %d, vetor A: \n", i);
    scanf("%d", &A[i]);
    
    soma_A=soma_A+A[i];
    
    printf("Digite um valor para a posição %d, vetor B: \n", i);
    scanf("%d", &B[i]);
    
    soma_B=soma_B+B[i];
    
    C[i]=A[i]+B[i];
    D[i]=B[i]-A[i];
  }
  
  printf("Soma dos valores do vetor A: %d\n", soma_A);
  printf("Soma dos valores do vetor B: %d\n", soma_B);
  
  for(i=0; i<max; i++)
    printf("Vetor C[%d] soma dos vetores A e B: %d\n", i, C[i]);  
  
  for(i=0; i<max; i++)
    printf("Vetor D[%d] subtracao dos vetores B e A: %d\n", i, D[i]);
  
  //system("PAUSE");
  return 0;
}