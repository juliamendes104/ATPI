#include <stdio.h>

int main(void) {
  int v[6], aux;
  int i, j=0;

  for(i=0;i<6;i++){
    printf("Digite um valor:");
    scanf("%d", &v[i]);
  }
  for(i=0;i<6;i++){
    for(j=i+1; j<6;j++){
      if(v[j] < v[i]){
        aux = v[i];
        v[i] = v[j];
        v[j] = aux;
      }
    }
  }
  for(i=0;i<6;i++){
    printf("%d\n", v[i]);
  }
}