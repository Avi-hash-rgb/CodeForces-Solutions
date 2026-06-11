#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int32_t main() {
    fastio;
    int n; cin >> n; 
    vector<int> home(n), game(n);
    for(int i = 0; i < n; i++){
        cin >> home[i] >> game[i];
    }

    int c = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(game[j] == home[i]) c++;
        }
    }

    cout << c;
}