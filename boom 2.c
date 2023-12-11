#include <stdio.h>
#include <string.h>

#define a 3

float pro(float notas[])
{
    float media;
    int soma = 0;
    int i;

    for (i = 0; i < a; i++)
    {
        soma += notas[i];
    }

    media = soma / a;

    return media;
}

char* oro(float media)
{
char result[200];


if (media >= 7.0)
{
    strcpy(result, "aprovado\n");
}
else{
    strcpy(result, "reprovado\n");
}

return result;
}

int main()
{

    float notas[a];
    int soma = 0;
    int i;
    float media;
    

    for (i = 0; i < a; i++)
    {
        printf("digite a %d nota do aluno: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }



    for (i = 0; i < a; i++)
    {
        printf("notas: %.1f \n", notas[i]);
    }

    printf("soma: %d\n", soma);
    printf("media: %.1f\n", pro(notas));
    printf("%s ", oro(media));

    return 0;
}