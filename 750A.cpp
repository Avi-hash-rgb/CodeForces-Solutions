#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k; cin >> n >> k;
    
    int time_limit = 240 - k;
    int time_spent = 0;
    int c = 0;

    for(int i = 1; i < n + 1; i++){
        if(time_spent + 5 * i <= time_limit){
            time_spent += 5 * i; c++;
        } else{
            break;
        }
    }

    cout << c << endl;
}