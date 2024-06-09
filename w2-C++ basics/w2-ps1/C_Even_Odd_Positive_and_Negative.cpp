#include<bits/stdc++.h>

using namespace std;

int main() {

    int N; cin >> N;
    
    vector<int> values(N);
    for (int i = 0; i < N; ++i) {
        cin >> values[i];
    }

    int even = 0, odd = 0, positive = 0, negative = 0;

    for (int i: values) {
        if (i > 0) positive++;
        if (i < 0) negative++;
        if (i % 2 == 0) even++;
        if (i % 2 != 0) odd++;
    }

    cout << "Even: " << even << "\n";
    cout << "Odd: " << odd << "\n";
    cout << "Positive: " << positive << "\n";
    cout << "Negative: " << negative << "\n";

}