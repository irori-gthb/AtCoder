#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string s;
  cin >> s;

  vector<char> n(10);
  int cur = 0;
  rep(i, s.size()) {
    if (s[i] == 'B') {
      cur = max(0, cur - 1);
    } else {
      n[cur] = s[i];
      cur++;
    }
  }

  rep(i, cur) cout << n[i];
  return 0;
}