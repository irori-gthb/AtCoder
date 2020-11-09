#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<ll> A(N);
  rep(i, N) cin >> A[i];

  vector<ll> sum(N);
  sum[0] = A[0];
  for (int i = 1; i < N; i++) sum[i] = sum[i - 1] + A[i];

  ll ans = LONG_MAX;
  rep(i, N) ans = min(ans, abs(sum[N - 1] - 2 * sum[i]));
  cout << ans << endl;
  return 0;
}