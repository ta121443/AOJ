#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

void insertionSort(vector<int> A, int n){
    rep(i, n){
        int v = A[i];
        int j = i - 1;
        while(j >= 0 && A[j] > v){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = v;
        rep(k, n){
            if(k != n-1) cout << A[k] << " ";
            else cout << A[k] << endl;
        }
    }
    return;
}
int main(){
    int n;
    cin >> n;
    vector<int> A(n);
    rep(i, n) cin >> A[i];
    insertionSort(A, n);
}