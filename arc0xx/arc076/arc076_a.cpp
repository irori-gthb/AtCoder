#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
const ll mod = 1000000007;

int main() {
  int N, M;
  cin >> N >> M;

  if (max(N, M) - min(N, M) > 1) {
    cout << 0 << endl;
    return 0;
  }

  ll ans = 1;
  rep(i, N) ans = (ans * (i + 1)) % mod;
  rep(i, M) ans = (ans * (i + 1)) % mod;
  if (N == M) ans = (2 * ans) % mod;
  cout << ans << endl;
  return 0;
}