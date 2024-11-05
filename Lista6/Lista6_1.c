int main(void) {
  int M[n][n], j, i, cont = 0;

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d", &M[i][j]);
    }
  }

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(M[i][j] > 10){
        printf("Valor %d -> maior que 10\n", M[i][j]);
        cont++;
      }
    }
  }

  printf("O total de valores maiores que 10 é: %d", cont);
  return 0;
}
