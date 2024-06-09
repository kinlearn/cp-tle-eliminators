#include <bits/stdc++.h>
using namespace std;

int main() {
    char x; cin >> x;
    if (x >= 65 && x <= 91) {
        cout << char (x + 32) << endl;
    } else if ( x >= 97 && x <= 123) {
        cout << char ( x-32) << endl;
    }
}