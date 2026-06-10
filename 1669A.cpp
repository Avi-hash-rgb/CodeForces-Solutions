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
        int n; cin >> n;
        if(n <= 1399) cout << "Division 4" << endl;
        else if(1400 <= n && n <= 1599) cout << "Division 3" << endl;
        else if(1600 <= n && n <= 1899) cout << "Division 2" << endl;
        else if(1900 <= n) cout << "Division 1" << endl;
    }

    return 0;
}