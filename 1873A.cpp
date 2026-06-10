#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    string s;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        if (s == "bca" || s == "cab") {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}