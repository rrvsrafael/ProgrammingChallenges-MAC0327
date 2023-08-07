#include <stdio.h>
#include <algorithm>
#include <iostream>

const int MAXX = 1123;

using namespace std;

int main()
{
    int i = 0, j = 0, k = 0, l = 0, m = 0;
    bool vdd = true;
    char c = 'a', vetor[MAXX];

    for (i = 0; c != '\n'; i++)
    {
        scanf("%c", &c);
        vetor[i] = c;
    }

    j = i - 1;

    scanf("%d", &k);

    //printf("j=%d\n", j);

    if (j % k != 0)
    {
        vdd = false;
        printf("NO");
        return 0;
    }
    if (j == k)
    {
        printf("YES");
        return 0;
    }

    m = j / k;

    for (i = 0; i < j;)
    {
        // printf("\ni=%d j=%d k=%d l=%d m=%d \n", i, j, k, l, m);
        if (vetor[i + l] != vetor[i + m - l - 1])
        {
            //printf("dif %c != %c  %d,%d\n", vetor[i + l], vetor[i + m - l - 1], i + l, i + m - l - 1);
            vdd = false;
            break;
        }
        //printf("ig %c = %c  %d,%d\n", vetor[i + l], vetor[i + m - l - 1], i + l, i + m - l - 1);
        if (i + l == i + m - l - 1 || i + l == i + m - l - 2)
        {
            i += m;
            l = 0;
        }
        else
        {
            l++;
        }
    }

    if (vdd)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    printf("\n");

    return 0;
}