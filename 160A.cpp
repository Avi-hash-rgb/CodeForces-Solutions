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
    for(int i = 0; i < n; i++) cin >> arr[i];

    sort(arr.begin(), arr.end(), greater<int>());
    int total = 0;
    for(int i = 0; i < n; i++) total += arr[i];

    int my_sum = 0, coins_taken = 0;
    for(int i = 0; i < n; i++){
        my_sum += arr[i];
        coins_taken++;
        if(my_sum > (total - my_sum)){
            cout << coins_taken; break;
        }
    }
}