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

    int bills[] = {100, 20, 10, 5, 1};
    int total = 0;

    for(int bill: bills){
        total += n / bill;
        n = n % bill;
    }

    cout << total;
}