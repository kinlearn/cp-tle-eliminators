#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m; cin >> n >> m;
   for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= (n - i + 1); j++) {
         
         if (j == 1 || j == n - i + 1 || i == 1)
            cout << "*";

         else cout << " ";
      }
      if (i != n) cout << endl;
   }
}
