#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  int ans = 0;
  bool f = false;
  rep(i, S.size()) {
    if (S[i] == '0') f = true;
    if (S[i] == '+') {
      if (f)
        f = false;
      else
        ans++;
    }
  }
  if (!f) ++ans;

  cout << ans << endl;
}