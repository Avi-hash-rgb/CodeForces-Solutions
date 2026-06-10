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
    int t; cin >> t; 
    while(t--){
        int a, c=0; cin >> a; 
        vector<int> arr(3);
        for(int i = 0; i < 3; i++) cin >> arr[i];
        for(int i = 0; i < 3; i++){
            if(arr[i] > a) c++;
        }

        cout << c << endl;
    }
}