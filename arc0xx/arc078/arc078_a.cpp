#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> a(N);
  vector<ll> sum(N);
  rep(i, N) cin >> a[i];

  sum[0] = a[0];
  for (int i = 1; i < N; i++) sum[i] = a[i] + sum[i - 1];

  ll ans = LLONG_MAX;
  for (int i = 0; i < N - 1; i++) {
    ans = min(ans, abs((sum[N - 1] - sum[i]) - sum[i]));
  }
  cout << ans << endl;
  return 0;
}