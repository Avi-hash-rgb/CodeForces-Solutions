#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int val;
    for(int r = 1; r < 6; r++){
        for(int c = 1; c < 6; c++){
            cin >> val;

            if(val == 1){
                int moves = abs(r - 3) + abs(c - 3);
                cout << moves << endl;
                return 0;
            }
        }
    }

    return 0;
}