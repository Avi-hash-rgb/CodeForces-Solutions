#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s; 

    int a = 0, b = 0, c = 0;

    for(int i = 0; i < s.length(); i++) {
        if(s[i] == 'a') {
            a++;
        }
        else if(s[i] == 'b') {
            b++;
        }
        else if (s[i] == 'c') {
            c++;
        }
    } 

    if(c == a || c == b) {
        cout << "YES";
    } 
    else {
        cout << "NO";
    }

    return 0;
}
