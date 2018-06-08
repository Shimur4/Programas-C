#include <stdio.h>
#include <stdio.h>

int main(void)
{
int i, j, n, m;
    printf("\nInforme o valor de linhas e colunas [ L C]: ");
    scanf("%d %d", &m, &n);
    system("cls");
    puts("\n");
    for (i = 1; i <= m; i = i + 1)
    {
        for (j = 1; j <= n; j = j + 1) printf("*");
        printf("\n");
    }

return 0;
}

