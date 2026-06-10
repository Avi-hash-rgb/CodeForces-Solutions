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
        int a, b, c; cin >> a >> b >> c;
        if(a < b && b < c) cout << "STAIR" << endl;
        else if(a < b && b > c) cout << "PEAK" << endl;
        else cout << "NONE" << endl;
    }
}