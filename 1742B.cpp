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
        sort(all(arr)); 

        bool is = false;
        for(int i = 0; i < n - 1; i++){
            if(arr[i] == arr[i + 1]) is = true;
        }

        if(is) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}