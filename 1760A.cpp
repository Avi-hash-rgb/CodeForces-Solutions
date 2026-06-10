#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, a, b, c; cin >> t;
    while(t--){
        cin >> a >> b >> c;
        vector<int> arr = {a, b, c};

        sort(arr.begin(), arr.end());
        int res = arr.at(1);
        cout << res << endl;
    }

    return 0;
}