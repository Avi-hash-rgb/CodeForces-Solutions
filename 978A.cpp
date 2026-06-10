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
    int n; cin >> n;
    string s; cin >> s;

    string res = " ";
    for(int i = 0; i < n; i++){
        if(res.find(s[i]) != string::npos){
            cout << s[i] << " ";
        }

        res += s[i];
    }
}