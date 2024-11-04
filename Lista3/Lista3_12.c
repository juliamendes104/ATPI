#include <stdio.h>

int main(void) {
  int n1, n2, n3, n4, n5;
  
  printf("Digite 5 números inteiros:");
  scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

  if (n1 > n2 && n1>n3 && n1>n4 && n1>n5){
    printf("Número maior: %d", n1);
  }
  else if(n2>n1 && n2>n3 && n2>n4 && n2>n5){
    printf("Maior número: %d", n2);
  }
  else if (n3>n1 && n3>n2 && n3>n4 && n3>n5){
    printf("Maior número: %d", n3);
  }
  else if (n4>n1 && n4>n2 && n4>n3 && n4>n5){
    printf("Maior número: %d", n4);
  }
  else{
    printf("Maior número: %d", n5);
  }

  if(n1<n2 && n1<n2 && n1<n3 && n1<n4 && n1<n5){
    printf("Menor número: %d", n1);
  }else if(n2<n1 && n2<n3 && n2<n4 && n2<n5){
    printf("Menor número: %d", n2);
  }
  else if (n3<n1 && n3<n2 && n3<n4 && n3<n5){
    printf("Menor número: %d", n3);
  }
  else if (n4<n1 && n4<n2 && n4<n3 && n4<n5){
    printf("Menor número: %d", n4);
  }
  else{
    printf("Menor número: %d", n5);
  }
  
}