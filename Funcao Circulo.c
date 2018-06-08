#include <stdio.h>
#include <math.h>

void circulo(int l, int c, int r, int x, int y, int xc, int yc)
{
    for (int x=0; x<=l; x++)
    {
        for (int y=0; y<=c; y++)
        {
            if ((pow(x - xc,2) + pow(y-yc,2)) <= pow(r,2))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

int main()
{
    int l, c, r, x, y, xc, yc;
    printf("Formando um circulo: ");
    printf("\nInforme o valor da linha: ");
    scanf("%d", &l);
    printf("\nInforme o valor da coluna: ");
    scanf("%d", &c);
    printf("\nInforme o Centro X da funcao: ");
    scanf("%d", &xc);
    printf("\nInforme o Centro Y da funcao: ");
    scanf("%d", &yc);
    printf("\nInforme o valor do Raio: ");
    scanf("%d", &r);
    circulo(l, c, r, x, y, xc, yc);

    return 0;
}
