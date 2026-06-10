#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, t; cin >> n >> t;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    sort(arr.begin(), arr.end());
    int books_read = 0;
    for(int i = 0; i < n; i++){
        if(t >= arr[i]){
            t -= arr[i];
            books_read++;
        } else {
            break;
        }
    }

    cout << books_read;
}