#include<bits/stdc++.h>
using namespace std; 

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    int curr = 0, maximum = 0;
    for(int i = 0; i < n - 1; i++){
        if(arr[i] <= arr[i + 1]) curr++;
        else{
            curr = 0;
        }
        maximum = max(curr, maximum);
    }

    cout << maximum + 1 << endl;
    return 0;
}