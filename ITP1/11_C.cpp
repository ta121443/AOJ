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
        if(c == 'L'){
            b = s[1];
            s[1] = s[2];
            s[2] = s[4];
            s[4] = s[3];
            s[3] = b;
        }
    }
    int top() {
        return s[0];
    }
    int front() {
        return s[1];
    }
};

int main() {
    int n;
    cin >> n;
    Dice dice1;
    rep(i, 6) cin >> dice1.s[i];
    bool flag = true;
    rep(i, n-1){
        int top, front, right, left, back, bottom;
        cin >> top >> front >> right >> left >> back >> bottom;
        if(dice1.s[1] == top) dice1.roll('N');
        else if(dice1.s[2] == top) dice1.roll('W');
        else if(dice1.s[3] == top) dice1.roll('E');
        else if(dice1.s[4] == top) dice1.roll('S');
        else if(dice1.s[5] == top) rep(i, 2) dice1.roll('N');
        while(dice1.s[1] != front) dice1.roll('L');
        if(dice1.s[2] == right && dice1.s[3] == left && dice1.s[4] == back && dice1.s[5] == bottom){
            flag = false;
            break;
        }
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}