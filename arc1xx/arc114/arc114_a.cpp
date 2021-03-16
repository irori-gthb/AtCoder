#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}

int main() {
  int N;
  cin >> N;

  vector<ll> X(N);
  rep(i, N) cin >> X[i];

  vector<ll> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
  ll ans = LLONG_MAX;
  rep(i, (1 << primes.size())) {
    ll calc = 1;
    rep(j, primes.size()) if ((i >> j) & 1) calc *= primes[j];

    bool flg = true;
    for (ll x : X)
      if (gcd(calc, x) == 1) flg = false;
    if (flg) ans = min(ans, calc);
  }
  cout << ans << endl;
  return 0;
}