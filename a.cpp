#include <stdio.h>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 0;
    char c;
    do
    {
        scanf("%c", &c);
        if (c == 'a')
        {
            a++;
        }
        b++;
    } while (c != '\n');
    printf("%d", min(a * 2 - 1, b - 1));
    return 0;
}