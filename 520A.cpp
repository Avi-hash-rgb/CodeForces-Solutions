#include <iostream>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    set<char> unique_chars;

    for (char c : s) {
        unique_chars.insert(tolower(c));
    }
    if (unique_chars.size() == 26) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
