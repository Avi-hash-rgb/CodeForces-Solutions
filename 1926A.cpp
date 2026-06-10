#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int32_t main() {
    fastio;
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int a = 0, b = 0;
        for(char c: s){
            if(c == 'A') a++;
            else b++;
        }

        if(a > b) cout << 'A' << endl;
        else cout << 'B' << endl;
    }
}