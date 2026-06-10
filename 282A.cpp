#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int sum = 0;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        string x;
        cin >> x;

        if (x.find("++") != string::npos) {
            sum++;
        }

        else if(x.find("--") != string::npos) {
            sum--;
        }
    }
    cout << sum;
    return 0;
}