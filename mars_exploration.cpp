#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int changes = 0;
    string pattern = "SOS";

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != pattern[i % 3]) {
            changes++;
        }
    }

    cout << changes;
    return 0;
}