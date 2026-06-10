#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;

        string seen = "";
        bool found = false;
        for(int i = 0; i < s.size(); i++){ 
            if(seen.find(s[i]) != string::npos){
                found = true; break;
            }

            seen += s[i];
        }

        if(found) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}