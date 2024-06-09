#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l;
    cin >> n;
    while (n > 0) {
        l = n % 10;
        n = n / 10;
    }
    string ans = (l % 2 == 0) ? "EVEN" : "ODD";
    cout << ans << endl;
}