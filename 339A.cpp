#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string x;
    cin >> x;

    if (x.length() > 1) {
        x.erase(remove(x.begin(), x.end(), '+'), x.end());
        sort(x.begin(), x.end());
        
        for (int c = 0; c < x.length(); c++) {
            if (c > 0) cout << "+";
            cout << x[c];
        }

    } else {
        cout << x;
    }
}