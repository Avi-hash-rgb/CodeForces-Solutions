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
        vector<int> cols;
        for(int i = 0; i < n; i++){
            string r; cin >> r;
            for(int j = 0; j < 4; j++){
                if(r[j] == '#'){
                    cols.push_back(j + 1); break;
                }
            }
        }

        for(int i = n - 1; i >= 0; i--){
            cout << cols[i] << " ";
        }
        cout << endl;
    }
}