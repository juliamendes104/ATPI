#include <stdio.h>

 int fatorial(int n){
  int i, fat=1;
   for(i=1;i<=n;i++)
     fat = fat * i;
   return fat;
   }
 int combinacao(int m, int n){
   return(fatorial(m)/(fatorial(m-n)*fatorial(n)));
 }

int main(void) {
  int result, m, n;

  printf("Digite n e m para calculo de combinação:\n");
  scanf("%d %d", &m, &n);

  //printf("Fatorial de m: %d\n", fatorial(m));
  //printf("Fatorial de n: %d\n", fatorial(n));

  result = fatorial(m)/(fatorial(m-n) * fatorial(n));
  //printf("A combinação %d- tomado %d a %d: %d", m, n, n, result);
  printf("A combinação %d- tomado %d a %d: %d", m, n, n, combinacao(m,n));
  
  return 0;
}