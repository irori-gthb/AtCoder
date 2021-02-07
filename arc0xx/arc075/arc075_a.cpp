#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> s(N);
  rep(i, N) cin >> s[i];

  int ans = 0;
  rep(i, N) ans += s[i];
  if (ans % 10 != 0) {
    cout << ans << endl;
    return 0;
  }

  sort(s.begin(), s.end());
  rep(i, N) {
    if ((ans - s[i]) % 10 != 0) {
      cout << ans - s[i] << endl;
      return 0;
    }
  }
  cout << 0 << endl;
  return 0;
}