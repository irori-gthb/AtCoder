#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  int ans = 0;
  rep(i, S.size()) {
    if (i % 2 == 0)
      ans += S[i] - '0';
    else
      ans -= S[i] - '0';
  }

  cout << ans << endl;
  return 0;
}