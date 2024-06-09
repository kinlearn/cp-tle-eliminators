#include<bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    
    vector<int> v(n);

    int i = 0;
    int easy = 0;
    while (i < n) {
        cin >> v[i];
        if (v[i] == 1) {
            cout << "HARD";
            easy++;
            break;
        }
        ++i;
    }
    if (easy == 0)
    cout << "EASY";

}