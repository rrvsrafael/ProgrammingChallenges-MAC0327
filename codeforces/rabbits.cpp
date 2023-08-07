#include <stdio.h>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, tempo, testes;
    scanf("%d", &testes);
    while (testes--)
    {
        scanf("%d%d%d%d", &a, &b, &c, &d);
        tempo = (b - a) / (c + d);
        if ((b - a) % (c + d) == 0)
        {
            printf("%d\n", tempo);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}