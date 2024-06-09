#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n; cin >> n; // Take input of number of days in a year.
    long long years, months, days;

    years = n / 365;
    n = n % 365;

    months = n / 30;
    n = n % 30;

    days = n;

    cout << years << " years \n";
    cout << months << " months \n";
    cout << days << " days \n";
}