#include <stdio.h>
#define size 10

int main(void) {
  int i, vet_i[size], m_i[size][size];
  char c, vet_c[size], m_c[size][size];
  float f, vet_f[size], m_f[size][size];
  double d, vet_d[size], m_d[size][size];

  printf("Variáveis simples - i, c, f, d");
  printf("\n\t\tint:\t\t%lu", sizeof(i));
  printf("\n\t\tchar:\t\t%lu", sizeof(c));
  printf("\n\t\tfloat:\t\t%lu", sizeof(f));
  printf("\n\t\tdouble:\t\t%lu", sizeof(d));

  printf("\n\nVariáveis homogêneas unidi. (vetor)");
  printf("\n\t\tint:\t\t%lu", size*sizeof(vet_i[size]));
  printf("\n\t\tchar:\t\t%lu", size*sizeof(vet_c[size]));
  printf("\n\t\tfloat:\t\t%lu", sizeof(vet_f[size]));
  printf("\n\t\tdouble:\t\t%lu", size*sizeof(vet_d[size]));

  printf("\n\nVariáveis homogêneas bidim. (matriz)");
  printf("\n\t\tint:\t\t%lu", size*size*sizeof(m_i[size][size]));
  printf("\n\t\tchar:\t\t%lu", size*size*sizeof(m_c[size][size]));
  printf("\n\t\tfloat:\t\t%lu", size*size*sizeof(m_f[size][size]));
  printf("\n\t\tdouble:\t\t%lu", size*size*sizeof(m_d[size][size]));
  


  
  return 0;
}