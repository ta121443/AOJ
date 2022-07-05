#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<(int)(n);i++)
#define rep2(i, s, n) for(int i=(s);i<(int)(n);i++)
#define reprev(i, n) for(int i=(int(n-1));i>=0;i--)
#define reprev2(i, s, e) for(int i=(int(s));i>=(int)(e);i--)

int main(){
    int n;
    cin >> n;
    vector<int> S(n);
    rep(i, n) cin >> S[i];

    int q;
    cin >> q;
    vector<int> T(q);
    rep(i, q) cin >> T[i];

    int counter = 0;
    rep(i, q){
        rep(j, n){
            if(S[j] == T[i]){
                counter++;
                break;
            }
        }
    }
    cout << counter << endl;
}