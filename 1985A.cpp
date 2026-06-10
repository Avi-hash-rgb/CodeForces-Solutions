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
        string i; cin >> i;

        cout << i[0] << s[1] << s[2] << " " << s[0] << i[1] << i[2] << endl;
    }
}