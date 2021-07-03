#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll n;
  cin >> n;

  vector<ll> f(50, 0);
  f[0] = 0;
  f[1] = 1;
  for (int i = 2; i < 50; i++) f[i] = f[i - 1] + f[i - 2];

  int ans = 0;
  for (int i = 49; i > 0; i--) {
    ans += n / f[i];
    n %= f[i];
  }
  cout << ans << endl;
  return 0;
}