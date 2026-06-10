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
    int n, m, a; cin >> n >> m >> a;
    n = (n + a - 1) / a;
    m = (m + a - 1) / a;
    cout << n * m << endl;
}