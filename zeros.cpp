#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int a, b, aux;

    char c;

    scanf("%d\n", &a);

    while (a--)
    {
        aux = 0;
        b = 0;

        do
        {
            scanf("%c", &c);
        } while (c == '0');

        while (c != '\n')
        {
            if (c == '1')
            {
                b += aux;
                aux = 0;
            }
            else
            {
                aux++;
            }
            scanf("%c", &c);
        }

        printf("%d\n", b);
    }
    return 0;
}