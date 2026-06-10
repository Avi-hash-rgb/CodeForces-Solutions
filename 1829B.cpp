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
        
        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];

        int max_times = 0, count = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] == 0) count++;
            else count = 0;
            max_times = max(max_times, count);
        }

        cout << max_times << endl;
    }
}