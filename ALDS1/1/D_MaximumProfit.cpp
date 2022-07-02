/*
FX取引では、異なる国の通貨を交換することで為替差の利益を得ることができます。例えば、１ドル１００円の時に
１０００ドル買い、価格変動により１ドル１０８円になったときに売ると、（１０８円ー１００円）＊１０００ドル＝８０００円
の利益を得ることが出来る。
ある通貨について、時刻ｔにおける価格Ｒｔ（ｔ＝０，１，２，、、n-1)が入力として与えられるので、
価格の差Rj - Ri(i < j)の最大値を求める。

単純に二重ループを組むとタイムオーバーO(n^2)

j以前の最小値を保存しておくことで、(jmin)、最大利益をO(1)で計算可能
*/


#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<(int)(n);i++)
#define rep2(i, s, n) for(int i=(s);i<(int)(n);i++)
#define reprev(i, n) for(int i=(int(n-1));i>=0;i--)

int main(){
    int n;
    cin >> n;
    vector<long long> R(n);
    rep(i, n) cin >> R.at(i);

    long long maxv = -pow(10, 9);
    long long minR = R.at(0);

    rep2(j, 1, n){
        maxv = max(maxv, R[j]-minR);
        minR = min(minR, R[j]);
    }
    cout << maxv << endl;

    return 0;
}