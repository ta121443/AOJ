#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

bool isPrime(int x){
    if(x <= 1) return false;
    else{
        rep2(i, 2, int(sqrt(x))+1){
            if(x % i == 0) return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    int counter = 0;
    rep(i, n){
        int x;
        cin >> x;
        if(isPrime(x)) counter++;
    }
    cout << counter << endl;
}