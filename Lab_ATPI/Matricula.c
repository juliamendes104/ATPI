#include <stdio.h>
# define n 3
#include <string.h>

typedef struct{
char nome[100];
int matricula;
float cr;
}aluno;

int main(void) {
  aluno aluno1, vec_alunos[n];
  int i;

  for(i=0;i<n;i++){
    printf("Digite o nome do aluno:");
    scanf(" %s", aluno1.nome);
    fflush(stdin);
    printf("Digite o número da matrícula:");
    scanf("%d", &aluno1.matricula);
    fflush(stdin);
    printf("Digite o cr:");
    scanf("%f", &aluno1.cr);
    fflush(stdin);
    vec_alunos[i] = aluno1;
  }

  for(i=0;i<n;i++){
    printf("Nome: %s\n", vec_alunos[i].nome);
    printf("Matrícula: %d\n", vec_alunos[i].matricula);
    printf("CR: %f\n", vec_alunos[i].cr);
  }
}