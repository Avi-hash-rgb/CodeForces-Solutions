#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n;
    string s, t; 
    bool ok = false;

    while(n--){
        cin >> k >> s >> t;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if(s == t) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}