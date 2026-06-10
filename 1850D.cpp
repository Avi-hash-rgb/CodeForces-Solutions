#include<bits/stdc++.h>
using namespace std; 

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        vector<int> arr(n);

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());
        int curr = 1, maxi = 1;
        for(int i = 0; i < n - 1; i++){
            if(abs(arr[i] - arr[i + 1]) <= k){
                curr++;
            } else {
                maxi = max(maxi, curr);
                curr = 1;
            }
        }

        maxi = max(maxi, curr);
        cout << n - maxi << endl;
    }
}