#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr); 
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int c = 0;
        for(int k = 1; k < n + 1; k++){
            if(n % k == 0) c++;
        }

        if(c == 3) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}