#include <stdio.h>
#include <string.h>
#define n 25

int main(void) {
  char senha[n];
  int i, verif = 0;

  while(verif == 0){
  printf("\n\nDigite uma senha:");
  scanf(" %[^\n]s", senha);

  for(i=0;i<strlen(senha);i++){
    if(senha[i] == '?' || senha[i] == '$' || senha[i] == '#'){
      verif = 1;
    }
  }
    if(verif==0){
      printf("\nUtilize um dos caracteres esperciais: ?,$ ou #.");
    }
  }
  return 0;
}