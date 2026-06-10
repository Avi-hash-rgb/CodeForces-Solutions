#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    string s;
    cin >> n >> s;

    int c = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == s[i - 1]) {
            c++;
        }
    }

    cout << c;
    return 0;
}