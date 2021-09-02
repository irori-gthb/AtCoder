#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<ll> A(N);
  rep(i, N) cin >> A[i];
  sort(A.begin(), A.end());

  ll ans = 0, calc = 0;
  int mod = 998244353;
  rep(i, N - 1) {
    calc = (2 * calc + A[N - i - 1]) % mod;
    ans += A[N - i - 2] * calc;
    ans %= mod;
  }
  rep(i, N) ans += A[i] * A[i], ans %= mod;

  cout << ans << endl;
  return 0;
}