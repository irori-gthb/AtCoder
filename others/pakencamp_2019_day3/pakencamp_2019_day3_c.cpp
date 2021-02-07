#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll N, M;
  cin >> N >> M;
  vector<vector<ll>> A(N, vector<ll>(M));
  rep(i, N) {
    rep(j, M) { cin >> A[i][j]; }
  }

  ll ans = 0;
  for (int i = 0; i < M - 1; i++) {
    for (int j = i + 1; j < M; j++) {
      ll sum = 0;
      for (ll h = 0; h < N; h++) {
        sum += max(A[h][i], A[h][j]);
      }
      ans = max(ans, sum);
    }
  }

  cout << ans << endl;
}