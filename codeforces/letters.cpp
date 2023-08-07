#include <cstdio>

int main()
{
    int leng, a = 0, k = 0, l = 0, matriz[30][30];
    char atual, anterior;
    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            matriz[i][j] = 0;
        }
    }

    scanf("%d", &leng);

    scanf(" %c", &anterior);

    while (leng > 1)
    {
        atual = anterior;
        scanf("%c", &anterior);
        matriz[atual - 'A'][anterior - 'A']++;
        leng--;
    }

    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            if (matriz[i][j] != 0)
            {
                //printf("\n%c%c - %d\n", i + 'A', j + 'A', matriz[i][j]);
            }
            if (matriz[i][j] > a)
            {
                a = matriz[i][j];
                k = i;
                l = j;
            }
        }
    }

    printf("%c%c", k + 'A', l + 'A');

    return 0;
}