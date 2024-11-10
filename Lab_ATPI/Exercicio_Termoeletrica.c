#include <stdio.h>
#define M 5
#define N 5

int main(void) {
  float C[M][N] = {
  {7.03, 14.87, 26.41, 9.18, 27.05},
  {24.26, 21.14, 11.89, 22.74, 31.62},
  {22.4, 12, 29.8, 24.06, 27.23},
  {19, 16.04, 18.81, 9.62, 13.05},
  {24.66, 22.01, 26, 28.2, 28.56}
  }, soma[M], p_adc[M], p_total=0, p_adc_t=0, s_turbina=0, n_pot, s=0, p_exc;
  int i, j;

  //a
  for(i=0;i<M;i++){
    soma[i]=0;
    printf("\n");
    for(j=0;j<N;j++){
      printf("  %.2f", C[i][j]);

      soma[i] += C[i][j];
    }
  }
  //b
  for(i=0;i<M;i++){
    p_total += soma[i];
    if(soma[i] > 110){
      printf("\n\nCidade %d: %.2f Termoelétrica ativada", i+1, soma[i]);
      p_adc[i] = soma[i] - 110;
      p_adc_t += p_adc[i];
      printf("\nPotência Adicional: %.2f", p_adc[i]);
      }
    else{
      printf("\n\nCidade %d: %.2f Sem potência adicional", i+1, soma[i]);
    }
    
  }
  s_turbina = p_total - p_adc_t;
  //c
  printf("\n\nPotêncial total de todas cidades: %.2f", p_total);
  printf("\nPotência fornecida pelas turbinas: %.2f", s_turbina);
  printf("\nPotência total das termoelétricas: %.2f", p_adc_t);

  //Parte 2

  printf("\n\nNova cidade. Forneça a potência consumida por essa cidade:");
  scanf("%f", &n_pot);

  for(i=0;i<M;i++){
    if(soma[i]<110){
      s += soma[i];
    }
  }
  p_exc = 220 - s;
  printf("\nPotência excedante: %.2f", p_exc);
  if((p_exc - n_pot) >0){
    printf("\nPotência da cidade adicionada.");
  }
  else{
    printf("\nHá sobrecarga.");
  }

  return 0;
}