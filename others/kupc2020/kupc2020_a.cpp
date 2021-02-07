#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> x(N), y(N);
  rep(i, N) cin >> x[i] >> y[i];

  int ans = 0;
  rep(i, N - 1) ans += abs(x[i + 1] - x[i]) + abs(y[i + 1] - y[i]);
  cout << ans << endl;
  return 0;
}