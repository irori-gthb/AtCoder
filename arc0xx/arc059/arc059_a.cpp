#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> a(N);
  rep(i, N) cin >> a[i];

  int ans = INT_MAX;

  for (int i = -100; i <= 100; i++) {
    int calc = 0;
    rep(j, N) calc += (i - a[j]) * (i - a[j]);
    ans = min(ans, calc);
  }
  cout << ans << endl;
  return 0;
}