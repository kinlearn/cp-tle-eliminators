#include<bits/stdc++.h>
using namespace std;

int main() {
    double a, b, c, d; cin >> a >> b >> c >> d;

    if ( // a * b + c == d ||
    //     a * b - c == d ||
    //     a + b - c == d ||
    //     a - b + c == d ||
    //     a - b * c == d ||
    //     a * b - c == d ||
    //     a + b - c == d ||
        a + b - c == d ||
        a - b + c == d ||
        a * b - c == d ||
        a * b + c == d ||

        b + c - a == d ||
        b - c * a == d ||
        b * c - a == d ||
        b * c + a == d ||

        c + a - b == d ||
        c - a * b == d ||
        c * a - b == d ||
        b * a + b == d


        ) cout << "YES";
    else cout << "NO";

}