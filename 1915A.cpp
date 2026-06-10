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
        set<string> seen;
        for(int i = 0; i < 3; i++){
            char n; cin >> n;
            if(seen.count(n) == 1){
                cout << "res: " << n << endl;
            }
            seen.insert(n);
        }
    }
}