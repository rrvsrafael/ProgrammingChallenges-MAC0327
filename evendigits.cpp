#include <iostream>

using namespace std;

long long int fastexp(long long int x, int p){
    if(p==0) return 1;
    if(p%2) return x*fastexp(x*x, p/2);
    return fastexp (x*x, p/2);
}

int main(){
    int T, i, digitos[20];
    long long int N, Naux, distancemaior, distancemenor;

    cin >> T;

    for (int j = 1; j<=T; j++){
        distancemaior = 0;
        distancemenor = 0;
        cin >> N;
        Naux = N;
        for (i = 0; i < 20; i++) {
            digitos[i]=Naux%10;
            Naux = Naux/10;
        }

        for(i=19; i>=0; i--){
            if(digitos[i]%2){
                if(digitos[i]!=9) {
                    digitos[i]++;
                    i--;
                    for(;i>=0;i--){
                        digitos[i] = 0;
                    }
                }
                else {
                    parada:
                    digitos[i] = 0;
                    if(i<20){
                        if(digitos[i+1]!=9) digitos[i+1]++;
                        else {
                            i++;
                            goto parada;
                        }
                        i=19;
                    }
                }
            }
        }
        for (i = 19; i>=0; i--) {
            Naux += digitos[i]*fastexp(10,i);
        }
        distancemaior = Naux - N;

        Naux = N;

        for (i = 0; i < 20; i++) {
            digitos[i]=Naux%10;
            Naux = Naux/10;
        }

        for(i=19; i>=0; i--){
            if(digitos[i]%2){
                    digitos[i]--;
                    i--;
                    for(;i>=0;i--){
                        digitos[i] = 8;
                }
            i=19;
            }
        }

        for (i = 19; i>=0; i--) {
            Naux += digitos[i]*fastexp(10,i);
        }
        distancemenor = N - Naux;
        cout << "Case #" << j << ": ";
        cout << min(distancemaior,distancemenor);
        cout << '\n';
    }

    return 0;
}
