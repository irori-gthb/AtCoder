#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, Q;
  cin >> N >> Q;

  vector<ll> A(N), K(Q), ans(Q), cnt(N);
  rep(i, N) cin >> A[i];
  rep(i, Q) cin >> K[i];

  rep(i, N) cnt[i] = A[i] - i - 1;
  rep(i, Q) {
    int r = lower_bound(cnt.begin(), cnt.end(), K[i]) - cnt.begin();
    if (r == 0)
      ans[i] = K[i];
    else
      ans[i] = A[r - 1] + (K[i] - cnt[r - 1]);
  }

  rep(i, Q) cout << ans[i] << endl;
  return 0;
}