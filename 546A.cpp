#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long k, n, w; cin >> k >> n >> w;
    long long total = 0;

    for(int i = 1; i < w + 1; i++){
        total += i * k;
    }
    
    long long borrowed = total - n;
    if(borrowed > 0) cout << borrowed << endl;
    else cout << 0 << endl;
}