#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<ll> max_a(N, 0);
  vector<ll> b(N, 0), max_b(N, 0);
  ll t;
  rep(i, N) {
    cin >> t;
    max_a[i] = max(max_a[max(0, i - 1)], t);
  }
  rep(i, N) {
    cin >> b[i];
    max_b[i] = max(max_b[max(0, i - 1)], b[max(0, i - 1)]);
  }

  ll ans = 0;
  rep(i, N) {
    ans = max(ans, max_a[i] * b[i]);
    cout << ans << endl;
  }
  return 0;
}