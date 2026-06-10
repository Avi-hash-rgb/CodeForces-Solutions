#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    string s;

    while(t--){
        cin >> s;

        string first = s.substr(0, 3);
        string last = s.substr(3, 6);

        int sum_f = 0;
        for (int i: first){
            sum_f += (i - '0');
        }

        int sum_l = 0;
        for (int j: last){
            sum_l += (j - '0');
        }

        if(sum_f == sum_l) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}