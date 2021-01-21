#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string s, t;
  cin >> s >> t;

  int cnt = 0;
  rep(i, s.size()) {
    if (s[i] == t[i])
      continue;
    else if (tolower(s[i]) == tolower(t[i]))
      cnt++;
    else {
      cout << "different" << endl;
      return 0;
    }
  }
  if (cnt == 0)
    cout << "same" << endl;
  else
    cout << "case-insensitive" << endl;
  return 0;
}