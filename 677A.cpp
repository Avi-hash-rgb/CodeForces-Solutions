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
    int n, h; cin >> n >> h;
    int total = 0;

    for(int i = 0; i < n; i++){
        int t; cin >> t;
        if(t <= h) total++;
        else if(t > h) total += 2;
    }

    cout << total;

    return 0;
}