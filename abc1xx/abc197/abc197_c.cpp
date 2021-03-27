#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<ll> A(N);
  rep(i, N) cin >> A[i];

  int ans = INT_MAX;
  rep(i, 1 << (N - 1)) {
    int x = 0;
    int o = A[0];
    for (int j = 1; j < N; j++) {
      if (i & (1 << (j - 1))) {
        x ^= o;
        o = 0;
      }
      o |= A[j];
    }
    x ^= o;
    ans = min(ans, x);
  }

  cout << ans << endl;
  return 0;
}