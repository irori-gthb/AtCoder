#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> a(N);
  rep(i, N) cin >> a[i];
  int ans = 0;
  int b = 1;
  rep(i, N) {
    b = a[b - 1];
    ans++;
    if (b == 2) {
      cout << ans << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}