#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t; cin >> t;
    int sumX = 0, sumY = 0, sumZ = 0;
    
    while(t--){
        int x, y, z; cin >> x >> y >> z;
        sumX += x; sumY += y; sumZ += z;
    }

    if(sumX == 0 && sumY == 0 && sumZ == 0){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}