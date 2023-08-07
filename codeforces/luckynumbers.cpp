#include <iostream>

unsigned long long int fastexp(unsigned long long int x, int p){
    if(p<2) return x;
    if(p%2) return x*fastexp(x*x, p/2);
    return fastexp (x*x, p/2);
}
using namespace std;

int main(){
    unsigned long long int r;
    int n;
    cin >> n;
    r = fastexp(2,n);
    //r = 1 << n;
    r--;
    r *= 2;
    cout << r;
    return 0;
}
