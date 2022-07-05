#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<(int)(n);i++)
#define rep2(i, s, n) for(int i=(s);i<(int)(n);i++)
#define reprev(i, n) for(int i=(int(n-1));i>=0;i--)
#define reprev2(i, s, e) for(int i=(int(s));i>=(int)(e);i--)

int main(){
    int n;
    cin >> n;
    set<string> dictionary;
    string message, str;

    rep(i, n){
        cin >> message >> str;
        if(message == "insert") dictionary.insert(str);
        if(message == "find") {
            if(dictionary.count(str)) cout << "yes" << endl;
            else cout << "no" << endl;
        }
    }
}