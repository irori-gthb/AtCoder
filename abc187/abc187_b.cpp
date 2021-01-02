#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<double> x(N), y(N);
  rep(i, N) cin >> x[i] >> y[i];

  int ans = 0;
  rep(i, N) {
    for (int j = i + 1; j < N; j++) {
      if (x[j] - x[i] == 0) continue;
      if (abs((y[j] - y[i]) / (x[j] - x[i])) <= 1) ans++;
    }
  }
  cout << ans << endl;
  return 0;
}