#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i, v[5], dif, m_dif=0, ind_p, ind_s;

  for(i=0;i<5;i++){
    printf("Digite um valor:");
    scanf("%d", &v[i]);
  }
  for(int i=1; i<5; i++){
    if(v[i] > v[i-1]){
      dif = v[i] - v[i-1];
      
    }else{
      dif  = v[i-1] - v[i];
    }
    if(dif>m_dif){
      m_dif = dif;
      ind_p = i-1;
      ind_s = i;
    }
  }
  printf("Maior diferença: %d", m_dif);
  printf("\nPosição: %d", ind_p);
  printf("\nPosição: %d", ind_s);
}