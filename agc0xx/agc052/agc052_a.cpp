#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int T;
  cin >> T;

  vector<int> c(T);
  string s;
  // Strings do not affect the answer.
  rep(i, T) cin >> c[i] >> s >> s >> s;
  rep(i, T) cout << string(c[i], '0') + string(c[i], '1') + "0" << endl;
  return 0;
}