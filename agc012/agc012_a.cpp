#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> a(3 * N);
  rep(i, 3 * N) cin >> a[i];
  sort(a.rbegin(), a.rend());

  ll ans = 0;
  for (int i = 1; i < 2 * N; i = i + 2) ans += a[i];
  cout << ans << endl;
  return 0;
}