#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<(int)(n);i++)
#define rep2(i, s, n) for(int i=(s);i<(int)(n);i++)
#define reprev(i, n) for(int i=(int(n-1));i>=0;i--)

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    rep(i, n) cin >> A.at(i);

    int count = 0;
    bool flag = true;

    while(flag){
        flag=false;
        rep(i, n-1){
            if(A.at(i) > A.at(i+1)){
                swap(A.at(i), A.at(i+1));
                flag=true;
                count++;
            }
        }
    }
    rep(i, n){
        if(i != n-1) cout << A.at(i) << " ";
        else cout << A.at(i) << endl;
    }
    cout << count << endl;
}