/*
 1 から n までの数の中から、重複無しで３つの数を選びそれらの合計が x となる組み合わせの数を求めるプログラムを作成して下さい。

例えば、1 から 5 までの数から３つを選んでそれらの合計が 9 となる組み合わせは、

    1 + 3 + 5 = 9
    2 + 3 + 4 = 9

の２通りがあります。
Input

複数のデータセットが入力として与えられます。各データセットでは、空白で区切られた n、x が 1 行に与えられます。

n、x がともに 0 のとき入力の終わりとします。
Constraints

    3 ≤ n ≤ 100
    0 ≤ x ≤ 300 

Output

各データセットについて、組み合わせの数を１行に出力して下さい。
Sample Input

5 9
0 0

Sample Output

2
*/

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