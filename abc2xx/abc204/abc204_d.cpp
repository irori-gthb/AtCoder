#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> T(N);
  rep(i, N) cin >> T[i];

  bitset<100001> dp;
  dp[0] = 1;
  int calc = 0;
  rep(i, N) {
    calc += T[i];
    dp |= dp << T[i];
  }

  int ans = calc;
  rep(i, calc + 1) if (dp[i] == 1) ans = min(ans, max(i, calc - i));
  cout << ans << endl;
  return 0;
}