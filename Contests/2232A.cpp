#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> arr(n);

        for(int i = 0; i < n; i++) cin >> arr[i];
        bool same = true;

        for(int i = 0; i < n; i++){
            if(i > 0 && arr[i] != arr[i - 1]) same = false;
        }

        int ss = 2;
        if(same) ss = 1;

        if(ss == 1) cout << 0 << endl;
        else cout << n - 1 << endl;
    }
}