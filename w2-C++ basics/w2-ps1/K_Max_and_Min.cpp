#include<bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    
    long long max, min;
    max = a;
    min = a;
    
    if (a >= b && a >= c) {
        max = a;
    } else if (b >= a && b >= c) {
        max = b;
    } else if (c >= a && c >= b) {
        max = c;
    }
    
    if (a <= b && a <= c) {
        min = a;
    } else if (b <= a && b <= c) {
        min = b;
    } else if (c <= a && c <= b) {
        min = c;
    }
    
    cout << min << " " << max;
}