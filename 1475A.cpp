#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if(n % 2 != 0) cout << "YES" << endl;
        else{
            if(n % 2 == 0 && n % 3 == 0) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
}