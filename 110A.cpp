#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string n; cin >> n;
    int len = 0;

    for(char c: n){
        if(c == '7' || c == '4'){
            len++;
        }
    }

    if(len == 4 || len == 7) cout << "YES";
    else cout << "NO";
}