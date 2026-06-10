#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string p;
    cin >> p;

    if(p.find('H') != string::npos || p.find('Q') != string::npos || p.find('9') != string::npos)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}   