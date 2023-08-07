#include <stdio.h>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, maior;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    maior = max(max(a, b), max(c, d));
    if (maior == a)
    {
        printf("%d %d %d", maior - b, maior - c, maior - d);
    }
    else if (maior == b)
    {
        printf("%d %d %d", maior - a, maior - c, maior - d);
    }
    else if (maior == c)
    {
        printf("%d %d %d", maior - b, maior - a, maior - d);
    }
    else
    {
        printf("%d %d %d", maior - b, maior - c, maior - a);
    }
    return 0;
}