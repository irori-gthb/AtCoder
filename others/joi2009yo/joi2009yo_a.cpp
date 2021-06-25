#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int a[6], b[6], c[6];
  rep(i, 6) cin >> a[i];
  rep(i, 6) cin >> b[i];
  rep(i, 6) cin >> c[i];

  int at = a[3] * 3600 + a[4] * 60 + a[5] - a[0] * 3600 - a[1] * 60 - a[2];
  int bt = b[3] * 3600 + b[4] * 60 + b[5] - b[0] * 3600 - b[1] * 60 - b[2];
  int ct = c[3] * 3600 + c[4] * 60 + c[5] - c[0] * 3600 - c[1] * 60 - c[2];
  cout << at / 3600 << ' ' << at % 3600 / 60 << ' ' << at % 3600 % 60 << endl;
  cout << bt / 3600 << ' ' << bt % 3600 / 60 << ' ' << bt % 3600 % 60 << endl;
  cout << ct / 3600 << ' ' << ct % 3600 / 60 << ' ' << ct % 3600 % 60 << endl;
  return (0);
}