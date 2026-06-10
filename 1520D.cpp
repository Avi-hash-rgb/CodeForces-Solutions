#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n; cin >> t;
    long long count = 0;
    
    while(t--){
        cin >> n;
        vector<int> arr(n);
        
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        
        for(int i = 0; i < arr.size(); i++){
            for(int j = i + 1; j < arr.size(); j++){
                if((i < j) && (arr[j] - arr[i] == j - i)) count++;
            }
        }

        cout << count << endl;
        count = 0;
    }
    return 0;
}