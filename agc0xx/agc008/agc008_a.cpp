#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll x, y;
  cin >> x >> y;

  if (x == y) {
    cout << 0 << endl;
    return 0;
  }
  if (abs(x) == abs(y)) {
    cout << 1 << endl;
    return 0;
  }
  if (abs(x) < abs(y)) {
    int ans = abs(y) - abs(x);
    if (x < 0) ans++;
    if (y < 0) ans++;
    cout << ans << endl;
    return 0;
  } else {
    int ans = abs(x) - abs(y);
    if (x > 0) ans++;
    if (y > 0) ans++;
    cout << ans << endl;
    return 0;
  }
  return 0;
}