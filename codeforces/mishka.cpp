#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
    int n, aux;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> aux;
        if(aux%2==0) {
            cout << aux-1 << ' ';
        }
        else{
            cout << aux << ' ';
        }
    }
    return 0;
}
