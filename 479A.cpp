#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int a, b, c; cin >> a >> b >> c;

    int maximum = max({a + (b * c), a * (b + c), a * b * c, (a + b) * c,  a + b + c});
    cout << maximum;
}