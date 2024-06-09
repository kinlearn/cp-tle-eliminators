#include<bits/stdc++.h>
using namespace std;

// [0,25], (25,50], (50,75], (75,100]
int main() {
    float n; cin >> n;
    if (n >= 0.00f && n <= 25.00f) cout << "Interval [0,25]" << endl;
    else if (n > 25.00f && n <= 50.00f) cout << "Interval (25,50]" << endl;
    else if (n > 50.00f && n <= 75.00f) cout << "Interval (50,75]" << endl;
    else if (n > 75.00f && n <= 100.00f) cout << "Interval (75,100]" << endl;
    else cout << "Out of Intervals" << endl;
}