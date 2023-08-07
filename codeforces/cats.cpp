#include <iostream>

using namespace std;

int main(){
    int c, d, l, t;
    cin >> t;
    while(t--){
        cin >> c >> d >> l;
        if(l>=4*d && l<=(4*d+4*c) && l%4==0 && l>=(4*c-4*d)){
            cout << "yes" << '\n';
        }
        else{
            cout << "no" << '\n';
        }
    }
    return 0;
}