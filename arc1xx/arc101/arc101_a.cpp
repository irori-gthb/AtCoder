#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;

  vector<int> x(N);
  rep(i, N) cin >> x[i];

  int ans = INT_MAX;
  rep(i, N - K + 1) ans =
      min(ans, min(abs(x[i]), abs(x[i + K - 1])) + x[i + K - 1] - x[i]);
  cout << ans << endl;
  return 0;
}