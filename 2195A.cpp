#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int32_t main() {
    fastio;
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];
        bool found = false;
        for(int i: arr){
            if (i == 67){
                found = true; break;
            }
        }

        if(found) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}