#include <stdio.h>

#define b 3
struct aluno
{
  char nome[200];
  float nota[3];
  float media;
};

float auau(struct aluno a)
{
  int soma = 0;
  int i;

  for (i = 0; i < b; i++)
  {
    soma += a.nota[i];
  }

  return a.media = soma / b;
}

int main()
{

  struct aluno a;

  int i;

  printf("nome do aluno: ");
  scanf("%s", &a.nome);

  for (i = 0; i < b; i++)
  {
    printf("digite a nota do aluno: ");
    scanf("%f", &a.nota[i]);
  }

  a.media = auau(a);

  printf("\naluno: %s", a.nome);
  printf("\nmedia: %.1f", a.media);

  return 0;
}