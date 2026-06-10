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
    string n; cin >> n;
    string res = "";
    for(int i = 0; i < n.size(); i++){
        int digit = 9 - (n[i] - '0');
        res += (char)(max(0LL, digit) + '0'); 
    }

    cout << res;
}