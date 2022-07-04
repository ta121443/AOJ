#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<(int)(n);i++)
#define rep2(i, s, n) for(int i=(s);i<(int)(n);i++)
#define reprev(i, n) for(int i=(int(n-1));i>=0;i--)
#define reprev2(i, s, e) for(int i=(int(s));i>=(int)(e);i--)


int main(){
    int n, num;
    string s;    
    cin >> n;
    list<int> deq;
    list<int>::iterator itr;
    rep(i, n){

        cin >> s;
        if(s == "insert"){
            cin >> num;
            deq.push_front(num);
        } else if(s == "delete"){
            cin >> num;
            for(itr = deq.begin(); itr != deq.end(); ++itr){
                if(*itr == num){
                    deq.erase(itr);
                    break;
                }
            }
        } else if(s == "deleteFirst"){
            deq.pop_front();
        } else deq.pop_back();
    }
    for(itr = deq.begin(); itr != deq.end(); itr++){
        if(itr != (--deq.end())) cout << *itr << " "; 
        else cout << *itr << endl;
    }
}