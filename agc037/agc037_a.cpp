#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  string a, b;
  int ans = 0;
  rep(i, S.size()) {
    b += S[i];
    if (a != b) {
      ans++;
      a = b;
      b = "";
    }
  }
  cout << ans << endl;
  return 0;
}