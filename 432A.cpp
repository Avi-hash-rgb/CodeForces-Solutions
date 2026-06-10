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
    int n, k; cin >> n >> k;
    int c = 0;
    for(int i = 0; i < n; i++){
        int t; cin >> t;
        if(t + k <= 5) c++;
    }

    cout << (c / 3);
}