#include <stdio.h>
//O ASCII é um código numérico que representa os caracteres, usando uma escala decimal de 0 a 127. Esses números decimais são então convertidos pelo computador para binários e ele processa o comando. Sendo assim, cada uma das letras que você digitar vai corresponder a um desses códigos.

int main(void) {
  int i;

  for (i = 32; i < 128; i++){
    if (i%10==0){//Para exibir dez caracteres por linha
      printf("\n");
      }
    printf("%c\t", i);// \t: Tabulação
      }

}