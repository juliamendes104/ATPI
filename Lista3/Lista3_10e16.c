#include <stdio.h>

int main(void) {
  int n1, n2, n3;
  printf("Digite três números inteiros:");
  scanf("%d %d %d", &n1, &n2, &n3);

  if(n1 < n2){
    if (n2 < n3){
      printf(" %d %d %d", n1, n2, n3);
    }
    else if(n3 < n1){
      printf("%d %d %d", n3, n1, n2);
    }
  }
  if (n2 < n1){
    if (n1 < n3){
      printf("%d %d %d", n2, n1, n3);
    }
    else if (n3 < n2){
      printf("%d %d %d", n3, n2, n1);
    }
  }
  if (n3 < n2){
    if(n1 < n3){
      printf("%d %d %d",n1, n3, n2);
    }
  }
  if(n3 < n1){
    if(n2 < n3){
      printf("%d %d %d", n2, n3, n1);
    }
  }
}