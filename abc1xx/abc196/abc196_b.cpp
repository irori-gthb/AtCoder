#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  string ans = "";
  rep(i, S.length()) {
    if (S[i] != '.')
      ans += S[i];
    else {
      cout << ans << endl;
      return 0;
    }
  }
  cout << ans << endl;
  return 0;
}