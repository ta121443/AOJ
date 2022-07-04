#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<(int)(n);i++)
#define rep2(i, s, n) for(int i=(s);i<(int)(n);i++)
#define reprev(i, n) for(int i=(int(n-1));i>=0;i--)
#define reprev2(i, s, e) for(int i=(int(s));i>=(int)(e);i--)

int main(){
    string s;
    cin >> s;
    vector<pair<int, int> > Node;
    int sum = 0;
    stack<int> s1;

    rep(i, s.size()){
        if(s[i] == '\\') s1.push(i);
        if(s[i] == '/' && !s1.empty()){
            int j = s1.top();
            int a = i - j;
            sum += a;
            s1.pop();

            while(!Node.empty() && Node.back().first > j){
                a += Node.back().second;
                Node.pop_back();
            }
            Node.push_back(make_pair(j, a));
        }
    }
    cout << sum << endl;
    cout << Node.size();
    rep(i, Node.size()){
        cout << " " << Node[i].second;
    }
    cout << endl;
}