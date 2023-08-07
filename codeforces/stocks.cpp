#include <iostream>
using namespace std;
const int MAXN = 2e5 + 10;

int preco[MAXN], variacao[MAXN], variacaoacumulada[MAXN], N, C, maximo, minimo, soma, atual, i;

int main()
{
    while (scanf("%d", &N) != EOF)
    {
        soma = 0;

        cin >> C;
        for (i = 0; i < N; i++)
        {
            cin >> preco[i];
        }
        for (i = 1; i < N; i++)
        {
            variacao[i] = preco[i] - preco[i - 1];
            variacaoacumulada[i] = variacaoacumulada[i - 1] + variacao[i];
        }

        minimo = max(0, variacaoacumulada[1]);
        maximo = min(0, variacaoacumulada[1]);

        for (i = 2; i < N; i++)
        {
            if (variacaoacumulada[i] < minimo)
            {
                cout << endl
                     << "maximo atual " << maximo << " minimo atual " << minimo << endl;
                if ((maximo - minimo) > C)
                    soma += maximo - minimo - C;
                maximo = variacaoacumulada[i];
                minimo = variacaoacumulada[i];
                cout << "novo minimo " << minimo << endl;
                continue;
            }

            if (variacaoacumulada[i] > maximo)
            {
                soma -= maximo;
                maximo = variacaoacumulada[i];
                soma += maximo;
            }
        }
        if ((maximo - minimo) > C)
            soma += maximo - minimo - C;
        cout << endl
             << soma << endl;
    }
    return 0;
}