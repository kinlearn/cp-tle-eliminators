#include<bits/stdc++.h>
using namespace std;

bool isPrime(long int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    long int n; cin >> n;
    if (isPrime(n)) cout << "YES";
    else cout << "NO";
}