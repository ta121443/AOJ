#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<(int)(n);i++)
#define rep2(i, s, n) for(int i=(s);i<(int)(n);i++)
#define reprev(i, n) for(int i=(int(n-1));i>=0;i--)
#define reprev2(i, s, e) for(int i=(int(s));i>=(int)(e);i--)

int main(){
    int n;
    cin >> n;
    vector<long long> S(n);
    rep(i, n) cin >> S[i];

    int q;
    cin >> q;
    vector<long long> T(q);
    rep(i, n) cin >> T[i];


    int counter = 0;
    rep(i, q){
        int left = 0;
        int right = n;        
        while(left < right){
            int mid = (left + right) / 2;
            if(T[i] == S[mid] || T[i] == S[left] || T[i] == S[right]){
                counter++;
                break;
            } else if(T[i] < S[mid]){
                right = mid;
            } else {
                left = mid+1;
            }
        }
    }

    cout << counter << endl;
}