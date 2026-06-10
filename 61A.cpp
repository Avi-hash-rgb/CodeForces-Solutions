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
    string s, s1, s2; cin >> s1 >> s2;
    for(int i = 0; i < s1.size(); i++){
        s += ((s1[i] - '0') ^ (s2[i] - '0')) + '0';
    }

    cout << s;
    return 0;
}