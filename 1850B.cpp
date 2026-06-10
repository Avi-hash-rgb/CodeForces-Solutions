#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, a, b;
    cin >> t;

    while(t--){
        cin >> n;
        while(n--){
            int max_quality = 0;
            cin >> a >> b;
            vector<int> quality;

            if(a <= 10) {
                max_quality = b;
            }
            cout << *max_element(quality.begin(), quality.end()) << endl;
        }
    }
}