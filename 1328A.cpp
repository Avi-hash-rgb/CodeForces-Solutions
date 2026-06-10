#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, a, b; cin >> t;
    while(t--){
        cin >> a >> b;
        int res = 0;
        if(a % b == 0){
            res = 0;
        } else {
            res = b - (a % b);
        }
        cout << res << endl;
    }
}