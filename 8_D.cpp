/*
リング状の文字列 sの任意の位置から、時計回りに連続した文字をいくつか選んで、文字列 pが作れるかを判定するプログラムを作成してください。
Input
１行目に文字列 sが与えられます。
２行目に文字列 pが与えられます。

Output
pが作れる場合は Yes と、作れない場合は No と１行に出力してください。

Constraints
1 ≤ pの長さ ≤ sの長さ ≤ 100
文字列は英小文字からなる

Sample Input 1
vanceknowledgetoad
advance

Sample Output 1
Yes

Sample Input 2
vanceknowledgetoad
advanced

Sample Output 2
No
*/
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main(){
    string s;
    string p;
    cin >> s >> p;
    string ss = s + s;

    bool flag = false;
    rep(i, ss.size() - p.size() + 1){
        if(ss.substr(i, p.size()) == p){
            flag = true;
            break;
        }
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}