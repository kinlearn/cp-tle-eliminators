#include <bits/stdc++.h>

using namespace std;
int main() {
    float x, y;  cin >> x >> y;
    string ans;
    
    if (x > 0 && y > 0) {
        ans = "Q1";
    } else if (x < 0 && y > 0) {
        ans = "Q2";
    } else if (x > 0 && y < 0) {
        ans = "Q4";
    } else if (x < 0 && y < 0) {
        ans = "Q3";
    } else if (x == 0 && y == 0) {
         ans = "Origem";
    } else if (x == 0) {
        ans = "Eixo X";
    } else if (y == 0) {
        ans = "Eixo Y";
    } 
    
    cout << ans << endl;
}