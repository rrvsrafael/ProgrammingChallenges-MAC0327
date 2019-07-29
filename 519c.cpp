#include <stdlib.h>
#include <iostream>

using namespace std;

/*int recursiva (int n, int m){
    if(n==1 && m==2) return 1;
    if(n==2 && m==1) return 1;
    if(n>1 && m>1) return 1+max(recursiva(n-2,m-1),recursiva(n-1,m-2));
    return 0;
}*/

int main() {
    int menor, maior, teams=0, n, m, aux;

    cin >> n >> m;

    //teams = recursiva(n,m);

    menor = min(n,m);
    maior = max(n,m);

    //cout << teams << '\n';

    //teams = recursiva(maior,menor);

    //cout << teams << '\n';

    //teams = min(menor, min(maior/4+menor/2 , (menor+maior)/3));

    //std::cout << teams << '\n';

    teams=0;

    while(maior<2*menor && maior>0 && menor>0){
        teams+=2;
        menor-=3;
        maior-=3;
    }

    teams+= min(maior/2,menor);

    std::cout << teams << '\n';

    return 0;
}
