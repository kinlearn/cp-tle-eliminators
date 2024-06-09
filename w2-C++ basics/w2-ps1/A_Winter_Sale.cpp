#include<bits/stdc++.h>
using namespace std;

int main() {
    cout << fixed << setprecision(2);
    float x, p; cin >> x >> p;
    float ans = ((100 * p) / (100 - x));
    cout << fixed << setprecision(2);
    cout << ans << endl;
}