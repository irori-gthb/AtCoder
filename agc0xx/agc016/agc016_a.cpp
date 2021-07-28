#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string s;
  cin >> s;

  int ans = 101;
  for (char c = 'a'; c <= 'z'; c++) {
    int num = 0, cnt = 0;
    rep(i, s.size()) {
      if (s[i] == c) {
        num = max(num, cnt);
        cnt = 0;
      } else
        cnt++;
    }
    num = max(num, cnt);
    ans = min(ans, num);
  }
  cout << ans << endl;
  return 0;
}