#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    
    int p; cin >> p;
    set<int> s;
    for(int i = 0; i < p; i++){
        int t; cin >> t;
        s.insert(t);
    }

    int q; cin >> q;
    for(int i = 0; i < q; i++){
        int c; cin >> c;
        s.insert(c);
    }

    if(s.size() == n) cout << "I become the guy.";
    else cout << "Oh, my keyboard!";
}