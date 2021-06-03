#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll N;
  cin >> N;

  int ans = INT_MAX;
  rep(i, 26) rep(j, 26) if ((N - 10 * i - 8 * j) % 26 == 0) ans =
      min(ans, i + j);
  cout << ans << endl;
  return 0;
}