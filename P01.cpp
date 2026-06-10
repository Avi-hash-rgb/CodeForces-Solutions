#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    reverse(arr.begin(), arr.end());
    for(int i = 0; i < arr.size(); i++){
        cout << i << " ";
    }
    return 0;
}