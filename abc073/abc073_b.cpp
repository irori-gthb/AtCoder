#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int ans = 0;
  int l, r;
  rep(i, N) {
    cin >> l >> r;
    ans += (r - l + 1);
  }
  cout << ans << endl;
  return 0;
}