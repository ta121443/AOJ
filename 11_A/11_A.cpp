/*
次の展開図から得られるサイコロを転がすシミュレーションを行うプログラムを作成してください。


サイコロの各面には図のとおりに 1 から 6 のラベルが割りあてられています。

入力としてサイコロの各面のラベルに対応する整数と、転がす命令の列が与えられるので、サイコロの上面の整数を出力してください。
シミュレーションの初期状態は、図のとおりのラベルの位置でサイコロが置かれているものとします。

Input
１行目に各面の整数が、図に示すラベルの順番に空白区切りで与えられます。
２行目に命令を表す１つの文字列が与えられます。命令はそれぞれ図に示す４方向を表す文字 E、N、S、W を含む文字列です。

Output
すべての命令を実行した後のサイコロの上面の数を１行に出力してください。

Constraints
0 ≤ 入力されるサイコロの面の数字 ≤ 100
0 ≤ 命令を表す文字列の長さ ≤ 100

Note
続くシリーズ Dice III, Dice IV では、複数のサイコロを扱うので、サイコロをクラスや構造体で作成しておきましょう。

Sample Input 1
1 2 4 8 16 32
SE

Sample Output 1
8

各面に 1, 2, 4, 8, 16, 32 と書かれたサイコロを S の方向に転がした後、E の方向に転がすと、上面の整数が 8 になります。

Sample Input 2
1 2 4 8 16 32
EESWN

Sample Output 2
32
*/

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

struct Dice {
    int s[6];
    void roll(char c){
        int b;
        if(c == 'S'){
            b = s[0];
            s[0] = s[4];
            s[4] = s[5];
            s[5] = s[1];
            s[1] = b;
        }
        if(c == 'E'){
            b = s[0];
            s[0] = s[3];
            s[3] = s[5];
            s[5] = s[2];
            s[2] = b;
        }
        if(c == 'W'){
            b = s[0];
            s[0] = s[2];
            s[2] = s[5];
            s[5] = s[3];
            s[3] = b;
        }
        if(c == 'N'){
            b = s[0];
            s[0] = s[1];
            s[1] = s[5];
            s[5] = s[4];
            s[4] = b;
        }
    }
};



int main(){
    Dice dice;
    rep(i, 6) cin >> dice.s[i];
    string order;
    cin >> order;

    rep(i, order.size()){
        dice.roll(order[i]);
    }

    cout << dice.s[0] << endl;
}