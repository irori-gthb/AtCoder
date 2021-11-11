#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int ans, p;
  cin >> ans;

  rep(i, 9) {
    cin >> p;
    ans -= p;
  }

  cout << ans << endl;
  return 0;
}