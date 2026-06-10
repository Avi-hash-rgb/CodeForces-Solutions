#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(int n) {
    if (n == 0) return 0;
    return (n % 10) + sumOfDigits(n / 10);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k;
    cin >> k;

    for(int i = 0; i < k; i++) {
        int n;
        cin >> n;
        cout << sumOfDigits(n) << endl;
    }

    return 0;
}