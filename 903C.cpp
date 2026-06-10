#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    sort(arr.begin(), arr.end());

    long long count = 0;
    for (int i = 0; i < n; i++) {
        auto it = upper_bound(arr.begin() + i + 1, arr.end(), arr[i]);
        count += distance(it, arr.end());
    }

    cout << count;
    return 0;
}