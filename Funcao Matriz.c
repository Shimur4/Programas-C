#include <stdio.h>

void matriz(int tc, int tl, int matriz1[50][50])
{
    for (int l=0; l<tl; l++)
    {
        for (int c=0; c<tc; c++)
            {
                printf("[%d][%d]: ", l, c);
                scanf("%d", &matriz1[l][c]);

            }
    }
    puts("\n");
    system("cls");
    puts("\n\n");
    for (int l=0; l<tl; l++)
    {
        for (int c=0; c<tc; c++)
            {
                printf("\t[%d] ", matriz1[l][c]);

            }
         puts(" ");
    }
}




int main()
{
    int tc, tl, matriz1[50][50];
    printf("\nDigite a Linhas: ");
    scanf("%d", &tl);
    printf("\nDigite o tanto de Colunas: ");
    scanf("%d", &tc);
    matriz(tl, tc, matriz1);

}
