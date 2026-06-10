#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    vector<int> scores(n); 
    for (int i = 0; i < n; i++) { 
        cin >> scores[i];
    }

    int threshold = scores[k - 1];
    int cntr = 0;
    for(int j = 0; j < scores.size(); j++) {
        if(scores[j] >= threshold && scores[j] > 0) {
            cntr++;
        }
    }

    cout << cntr << endl;
    return 0;
}