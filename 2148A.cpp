#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int32_t main() {
    fastio;
    int t; cin >> t;
    while(t--){
        int x, n; cin >> x >> n;
        int total = 0;
        for(int i = 1; i < n + 1; i++){
            if(i % 2 != 0){
                total += (-x);
            } else {
               total += x;
            }
        }

        cout << total << endl;
    }
}