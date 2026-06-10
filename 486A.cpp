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
    long long n; cin >> n;

    if(n % 2 == 0){
        cout << n / 2;
    } else {
        cout << -((n + 1) / 2);
    }
    return 0;
}