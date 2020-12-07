#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll N, T;
  cin >> N >> T;

  vector<ll> t(N);
  rep(i, N) cin >> t[i];

  ll ans = 0;
  rep(i, N - 1) ans += min(T, t[i + 1] - t[i]);
  cout << ans + T << endl;
  return 0;
}