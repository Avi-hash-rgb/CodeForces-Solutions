#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np; 
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int m = k * l;
    int t = m / n;
    int li = c * d;
    int s = p / np;

    cout << min({t, li, s}) / n << endl;
}