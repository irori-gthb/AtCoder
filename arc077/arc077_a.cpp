#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  rep(i, n) cin >> a[i];

  vector<int> ans;
  rep(i, n) {
    if (i % 2 == 0)
      ans.insert(ans.begin(), a[i]);
    else
      ans.push_back(a[i]);
  }
  if (n % 2 == 0) reverse(ans.begin(), ans.end());
  rep(i, n) {
    cout << ans[i];
    if (i != n - 1) cout << ' ';
  }
  return 0;
}