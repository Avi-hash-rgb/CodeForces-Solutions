#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n; cin >> t;
    while(t--){
        long long n; cin >> n;
        int count = 0, limit = 0;
        while(n != 1 && limit < 1000){
            if(n % 6 == 0){
                n = n / 6;
            } else{
                n *= 2;
            }
            count++;
            limit++;
        }

        if(n == 1){
            cout << count << endl;
        } else {
            cout << -1 << endl;
        }
    }
}