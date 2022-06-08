/*

大文字と小文字の入れ替え

与えられた文字列の小文字と大文字を入れ替えるプログラムを作成してください。
Input

文字列が1行に与えられます。
Output

与えられた文字列の小文字と大文字を入れ替えた文字列を出力して下さい。アルファベット以外の文字はそのまま出力して下さい。
Constraints

入力される文字列の長さ < 1200

Sample Input

fAIR, LATER, OCCASIONALLY CLOUDY.

Sample Output

Fair, later, occasionally cloudy.


*/

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main(){
    string s;
    getline(cin, s);
    rep(i, s.size()){
        if(islower(s[i])) s[i] = toupper(s[i]);
        else if(isupper(s[i])) s[i] = tolower(s[i]);
    }
    cout << s << endl;
}