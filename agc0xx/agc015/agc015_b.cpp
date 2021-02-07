#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  ll ans = 0;
  rep(i, S.size()) {
    if (S[i] == 'U') {
      ans += S.size() - i - 1;
      ans += i * 2;
    } else {
      ans += (S.size() - i - 1) * 2;
      ans += i;
    }
  }

  cout << ans << endl;
  return 0;
}