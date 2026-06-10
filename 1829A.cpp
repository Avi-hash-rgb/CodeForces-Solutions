#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    string target = "codeforces";
    string s;

    while(t--){
        int c = 0;
        cin >> s;
        for(int i = 0; i < target.length(); i++){
            if(s[i] != target[i]) {
                c++;
            }
        }
        
        cout << c << endl;
    }
}