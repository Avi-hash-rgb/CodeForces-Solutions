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
    string s; getline(cin, s);
    
    set<char> distinct;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            distinct.insert(s[i]);
        }
    }

    cout << distinct.size();
    return 0;
}