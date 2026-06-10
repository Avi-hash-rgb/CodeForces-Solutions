#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    int groups = 1;
    string current, previous;
    
    cin >> previous;
    for (int i = 1; i < n; i++) {
        cin >> current;
        if (current != previous) {
            groups++;
            previous = current;
        }
    }

    cout << groups << endl;
    return 0;
}
