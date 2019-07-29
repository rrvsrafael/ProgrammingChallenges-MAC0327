#include <bits/stdc++.h>
const int NMAX = 11234;
using namespace std;

/*
c1 = 0;
c2 = 0;
for(i=1;i<=N;i++){
    c1 += (maiora-alturas[i])*custos[i];
}
for(i=1;i<=N;i++){
    c2 += (alturas[i]-menora)*custos[i];
}
if(c1<c2){
    menora =
}
*/

long long int T, N, alturas[NMAX], custos[NMAX], maiora=0, menora=NMAX, i;

long long int custo_total;

long long int calcula_custo_total(int a){
    long long int ctt=0;
    for(i=1; i<=N; i++){
        ctt += abs(a-alturas[i])*custos[i];
    }
    return ctt;
}

int main(){
    cin >> T;
    while(T--){

        cin >> N;

        for(i=1;i<=N;i++){
            cin >> alturas[i];
            if(alturas[i]>maiora) maiora = alturas[i];
            if(alturas[i]<menora) menora = alturas[i];
        }

        for(i=1;i<=N;i++){
            cin >> custos[i];
        }

        while(maiora-menora>5){
            if(calcula_custo_total(maiora) < calcula_custo_total(menora)){
                menora = (2*menora + maiora)/3 - 1;
            }
            else{
                maiora = (2*maiora + menora)/3 + 1;
            }
        }

        custo_total = calcula_custo_total(menora);

        while(menora<=maiora){
            if(calcula_custo_total(menora)<custo_total)
                custo_total=calcula_custo_total(menora);
            menora++;
        }

        cout << custo_total << '\n';
    }
    return 0;
}
