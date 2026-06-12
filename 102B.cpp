#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int32_t main() {
    fastio;
    string n; cin >> n;
    if(n.size() == 0) cout << 0;
    else{
        int counter = 0;
        while(n.size() > 1){
            int sums = 0;
            for(int i = 0; i < n.size(); i++){
                sums += (n[i] - '0');
            }

            n = to_string(sums);
            counter++;
        }

        cout << counter;
    }
}