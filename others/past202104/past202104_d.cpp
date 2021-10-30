#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;

  vector<int> A(N);
  rep(i, N) cin >> A[i];

  ll ans = 0;
  rep(i, K - 1) ans += A[i];

  rep(i, N - K + 1) {
    ans += A[i + K - 1];
    cout << ans << endl;
    ans -= A[i];
  }
  return 0;
}