#include <stdio.h>
#include <stdlib.h>

int main()
{

    int nota;
    float media;
    int soma = 0;
    int i;

    for (i = 1; i <= 5; i++)
    {
        do
        {
            printf("digite a %dª nota: ", i);
            scanf("%d", &nota);
        } while (nota < 0 || nota > 10);
            soma += nota;
    }

    media = soma / 5;

    printf("soma: %d\n", soma);
    printf("media: %f\n", media);

    if (media >= 7)
    {
        printf("aprovao parabens");
    }
    else
    {
        printf("reprovado parabens");
    }

    return 0;
}