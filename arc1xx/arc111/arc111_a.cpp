#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

ll modpow(ll a, ll p, ll m) {
  if (p == 0) return 1 % m;
  ll t = modpow(a, p / 2, m);
  t = t * t % m;
  if (p % 2) t = t * a % m;
  return t;
}

int main() {
  ll N, M;
  cin >> N >> M;

  ll ans = modpow(10, N, M * M) / M;
  cout << ans << endl;
  return 0;
}