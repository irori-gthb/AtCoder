#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll L, R;
  cin >> L >> R;

  if (R - L >= 672) {
    cout << 0 << endl;
    return 0;
  }
  if (L % 673 > R % 673) {
    cout << 0 << endl;
    return 0;
  }

  ll ans = LLONG_MAX;
  for (ll i = L; i < R; i++) {
    for (ll j = i + 1; j <= R; j++) {
      ans = min(ans, i * j % 2019);
    }
  }
  cout << ans << endl;
  return 0;
}