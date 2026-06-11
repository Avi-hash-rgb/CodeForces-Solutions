#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int32_t main() {
    fastio;
    int n; cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    int odd_index = 0, odd = 0;
    int even_index = 0, even = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 != 0){
            odd_index = i + 1;
            odd++;
        } else {
            even_index = i + 1;
            even++;
        }
    }

    if(odd < even) cout << odd_index;
    else cout << even_index;
}