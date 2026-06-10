#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, c; cin >> n >> c;
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int max_profit = 0;
    for(int i = 0; i < n - 1; i++){
        int curr = arr[i] - arr[i + 1] - c;
        max_profit = max(max_profit, curr);
    }

    cout << max_profit;
}