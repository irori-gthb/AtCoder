#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int x, y;
  cin >> x >> y;

  if (y < 0 || y % 2 != 0) {
    cout << -1 << endl;
    return 0;
  }

  int ans = y / 2;
  if (-ans <= x && x <= ans && abs(x % 2) == ans % 2)
    cout << ans << endl;
  else
    cout << -1 << endl;
  return 0;
}