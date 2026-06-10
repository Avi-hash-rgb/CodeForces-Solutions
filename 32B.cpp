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
    string s; cin >> s;
    string res = "";
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '.') res += '0';
        else if(s[i + 1] == '-'){
            if(s[i + 1] == '.') res += '1';
            else if(s[i + 1] == "-") res += '2';
            i++;
        }
    }

    cout << res;
    return 0;
}