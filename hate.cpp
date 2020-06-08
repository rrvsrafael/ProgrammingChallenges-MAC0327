#include <stdio.h>
#include <algorithm>
#include <iostream>

const int MAXX = 112345;

using namespace std;

int main()
{
    int i = 0, j = 0, k = 0;
    bool vdd = true;
    char c = 'a', vetor[MAXX], auxiliar[MAXX];
    for (i = 0; c != '\n'; i++)
    {
        scanf("%c", &c);

        vetor[i] = c;
        if (c != 'a' && c != '\n')
        {
            auxiliar[j++] = c;
        }
    }
    k = i - 1;
    for (i = 0; i < j; i++)
    {
        //printf("%c", auxiliar[i]);
    }
    //printf("\n");
    if (j % 2 == 1)
    {
        vdd = false;
    }
    // printf("j=%d\n", j);
    for (i = 0; i < j / 2; i++)
    {
        if (auxiliar[i + j / 2] != auxiliar[i])
        {
            vdd = false;
            //printf("%c!=%c\n", auxiliar[i], auxiliar[i + j / 2]);
        }
    }

    for (i = k - j / 2; i < k; i++)
    {
        if (vetor[i] == 'a')
        {
            vdd = false;
        }
    }

    if (vdd)
    {
        for (i = 0; i < k - j / 2; i++)
        {
            printf("%c", vetor[i]);
        }
    }
    else
    {
        printf(":(");
    }
    printf("\n");

    return 0;
}