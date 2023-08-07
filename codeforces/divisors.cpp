#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, x=1, vetor[150] , y=1, aux;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> vetor[i];
        if(vetor[i]>x){
            x=vetor[i];
        }
    }
    sort(vetor, vetor+n);

    for(int i=n-1; i>0; i--){
        if(x%vetor[i]==0) {
            aux = vetor[i];
            vetor[i]=0;
            if(aux==vetor[i-1]) i--;
        }

    }

    for(int i=n-1; i>=0; i--){
        if(vetor[i]>0){
            y = vetor[i];
            break;
        }
    }

    cout << x << " " << y;

    return 0;
}
