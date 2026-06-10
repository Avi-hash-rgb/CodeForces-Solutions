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
    int t;
    cin >> t;
    int count_m = 0, count_c = 0;
    while (t--) {
        int m, c; cin >> m >> c;
        if(m > c) count_m++;
        else if(m < c) count_c++;
    }
    if(count_m > count_c) cout << "Mishka" << endl;
    else if(count_m < count_c) cout << "Chris" << endl;
    else cout << "Friendship is magic!^^" << endl;
    return 0;
}