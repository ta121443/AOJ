#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<(int)(n);i++)
#define rep2(i, s, n) for(int i=(s);i<(int)(n);i++)
#define reprev(i, n) for(int i=(int(n-1));i>=0;i--)
#define reprev2(i, s, e) for(int i=(int(s));i>=(int)(e);i--)

int value(vector<int> a, int size, int p){
    int w = 0, k = 1;
    rep(i, size) {
        if(w + a[i] <= p) w += a[i];
        else{
            w = a[i];
            k++;
        }
    }
    return k;
}

int main(){
    int n,k;
    vector<int> w(n);    
    cin >> n >> k;
    int sum = 0, max = 0;
    rep(i, n){
        cin >> w[i];
        sum += w[i];
        if(max < w[i]) max = w[i];
    }

    while(max != sum){
        int mid = (max + sum) / 2;
        if(value(w, n, mid) > k){
            max = mid + 1;
        } else{
            sum = mid;
        }
    }
    cout << max << endl;
}