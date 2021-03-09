#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll x, y, z;
  cin >> x >> y >> z;

  ll ans = z;
  while (ans % 17 != x || ans % 107 != y) {
    ans += 1000000007;
  }
  cout << ans << endl;
  return 0;
}