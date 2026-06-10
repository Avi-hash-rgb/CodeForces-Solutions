#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    string res = "";

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    for (char c: s) {
        if (c == 'a' || c == 'o' || c == 'y' || c == 'e' || c == 'u' || c == 'i') {
            continue;
        }

        else {
            res += ".";
            res += c;
        }
    }
    
    cout << res << endl;
    return 0;
}