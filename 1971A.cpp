#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, a, b; cin >> t;
    while(t--){
        cin >> a >> b;
        cout << min(a, b) << " " << max(a, b) << endl;
    }
}