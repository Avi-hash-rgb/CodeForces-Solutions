#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, a, b, c;
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        if(a + b == c || a + c == b || b + c == a) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}