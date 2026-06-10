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
    int n; cin >> n;
    vector<int> arr(3);
    for(int i = 0; i < 3; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());

    int t = 0;
    for(int i = 0; i < 3; i++) t += arr[i];
    if(t < n) cout << n;
    else{
        int total = 0, count = 0;
        for(int i = 0; i < 3; i++){
            total += arr[i];                     
            count++; 
            if(total == n) break;
        }
        cout << count;
    }
}