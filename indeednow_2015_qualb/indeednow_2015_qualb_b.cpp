#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string s, t;
  cin >> s >> t;

  if (s.size() != t.size()) {
    cout << -1 << endl;
    return 0;
  }

  rep(i, s.size() + 1) {
    if (s.substr(s.size() - i, i) + s.substr(0, s.size() - i) == t) {
      cout << i << endl;
      return 0;
    }
  }

  cout << -1 << endl;
  return 0;
}