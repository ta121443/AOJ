#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<(int)(n);i++)
#define rep2(i, s, n) for(int i=(s);i<(int)(n);i++)
#define reprev(i, n) for(int i=(int(n-1));i>=0;i--)

int main(){
    int n;
    cin >> n;
    vector<int> A(n);
    rep(i, n) cin >> A[i];

    int count = 0;
    bool flag = true;
    rep(i, n){
        pair<int, int> minPair = make_pair(A[i], i);
        bool flag = false;
        rep2(j, i, n){
            if(A[j] < minPair.first){
                minPair = make_pair(A[j], j);
                flag = true;
            }
        }
        if(flag){
            count++;
            swap(A[i], A[minPair.second]);
        }
    }
    
    rep(i, n){
        if(i != n-1) cout << A.at(i) << " ";
        else cout << A.at(i) << endl;
    }
    cout << count << endl;
}