#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  char X;
  string s;
  cin >> X >> s;

  rep(i, s.size()) {
    if (s[i] == X) continue;
    cout << s[i];
  }
  cout << endl;
  return 0;
}