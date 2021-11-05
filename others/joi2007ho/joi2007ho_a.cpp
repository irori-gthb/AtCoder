#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int n, k;
  cin >> n >> k;

  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int ans = 0, calc = 0;
  rep(i, k) calc += a[i];
  rep(i, n - k) {
    ans = max(ans, calc);
    calc += (a[i + k] - a[i]);
  }

  cout << max(ans, calc) << endl;
  return 0;
}