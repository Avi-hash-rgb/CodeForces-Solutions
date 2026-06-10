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
    int n, t; cin >> n >> t;
    string s; cin >> s;

    while(t--){
        for(int i = 0; i < n - 1; i++){
            if(s[i] == 'B' && s[i + 1] == 'G'){
                swap(s[i], s[i + 1]);
                i++;
            }
        }
    }

    cout << s << endl;
    return 0;
}