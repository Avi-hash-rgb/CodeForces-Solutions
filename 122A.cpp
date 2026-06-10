#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

bool isLucky(string s){
    for(int i = 0; i < s.size(); i++){
        if (s[i] != '4' && s[i] != '7'){
            return false;
        }
    }

    return true;
}

int32_t main() {
    fastio;
    int n; cin >> n;
    if(isLucky(to_string(n)) == true){
        cout << "YES"; return 0;
    }
    
    for(int i = 1; i < n + 1; i++){
        if(n % i == 0 && isLucky(to_string(i))){
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}
