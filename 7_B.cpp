#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main(){
    while(true){
    int n, x;
    cin >> n >> x;
    if(n == 0 && x == 0) break;
    int counter = 0;
    rep2(i, 1, n+1){
        rep2(j, i+1, n+1){
            rep2(k, j+1, n+1){
                if((i + j + k) == x) counter++;
            }
        }
    }
    cout << counter << endl;
    }
}