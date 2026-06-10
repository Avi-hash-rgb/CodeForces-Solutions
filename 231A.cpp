#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    int count = 0;
    while(t--) { 
        int p, v, t_;
        cin >> p >> v >> t_;

        if (p + v >= 2 || v + t_ >= 2 || p + t_ >= 2) count++;
    }

    cout << count;
    return 0;
}