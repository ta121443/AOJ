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
        if(c == 'R'){
            b = s[1];
            s[1] = s[3];
            s[3] = s[4];
            s[4] = s[2];
            s[2] = b;

        }
    }
};

int main() {
    Dice dice;
    rep(i, 6) cin >> dice.s[i];
    int n;
    cin >> n;
    rep(i, n){
        int top, front;
        cin >> top >> front;
        if(dice.s[1] == top) dice.roll('N');
        else if(dice.s[2] == top) dice.roll('W');
        else if(dice.s[3] == top) dice.roll('E');
        else if(dice.s[4] == top) dice.roll('S');
        else if(dice.s[5] == top) rep(i, 2) dice.roll('N');
        while(dice.s[1] != front) dice.roll('L');
        cout << dice.s[2] << endl;
    }
}