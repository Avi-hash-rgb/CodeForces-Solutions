#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr); int t; cin >> t;
    while(t--){
        string s; cin >> s;
        if(s.length() <= 4){
            cout << s << endl;
        } else if (s.length() > 4){
            char first = s.front(), last = s.back(); int length = s.length() - 2; cout << first << length << last << endl;
        }
    }
}