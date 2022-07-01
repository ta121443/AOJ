/*
１つの単語 W と文章 T が与えられます。T の中にある W の数を出力するプログラムを作成して下さい。

文章 T に含まれるスペースまたは改行で区切られた文字列を単語 Ti とします。すべての Ti において単語 W と同じになるものを数えて下さい。

なお、大文字と小文字は区別しません。

Constraints
Wの文字列の長さは10を超えない
Wに含まれる文字はすべてアルファベット小文字である
Tの１行あたりの文字列の長さは1000を超えない
Input
１行目に単語 W が与えられます。

続いて、複数の行にまたがった文章与えられます。END_OF_TEXT という文字列が文章の終わりを示します。

Output
単語 W の数を出力して下さい。
*/

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main(){
    string w;
    cin >>w;

    int counter = 0;
    while(true){
    string s;
    cin >> s;
    if(s == "END_OF_TEXT") break;    
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    if(s == w) counter++;
    }
    cout << counter << endl;
}