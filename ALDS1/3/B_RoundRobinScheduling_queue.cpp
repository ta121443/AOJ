#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0;i<(int)(n);i++)
#define rep2(i, s, n) for(int i=(s);i<(int)(n);i++)
#define reprev(i, n) for(int i=(int(n-1));i>=0;i--)
#define reprev2(i, s, e) for(int i=(int(s));i>=(int)(e);i--)

int main(){
    int n, q;
    cin >> n >> q;

    queue<pair<string, int>> schedule;

    rep(i, n){
        string name;
        int time;
        cin >> name >> time;
        schedule.push(make_pair(name, time));
    }

    int time = 0;
    while(!schedule.empty()){
        if(schedule.front().second <= q){
            time += schedule.front().second;
            cout << schedule.front().first << " " << time << endl;
            schedule.pop();
        } else {
            schedule.front().second -= q;
            time += q;
            pair<string, int> surplus = schedule.front();
            schedule.pop();
            schedule.push(surplus);
        }
    }

}