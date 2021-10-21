#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  ll K;
  cin >> N >> K;

  vector<int> a(N);
  rep(i, N) cin >> a[i];

  ll calc = 0, ans = 0;
  int cur = 0;

  rep(i, N) {
    while (cur < N && calc + a[cur] < K) {
      calc += a[cur];
      cur++;
    }
    ans += cur - i;
    calc -= a[i];
  }
  ans = (ll)N * (N + 1) / 2 - ans;
  cout << ans << endl;
  return 0;
}