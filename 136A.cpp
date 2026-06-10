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
    vector<int> arr(n);
    vector<int> ans(n + 1);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        ans[arr[i]] = i + 1;
    }
    for(int i = 1; i <= n; i++) cout << ans[i] << " ";
}