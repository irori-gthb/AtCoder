#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll txa, tya, txb, tyb, T, V;
  cin >> txa >> tya >> txb >> tyb >> T >> V;

  double dis = T * V;
  bool f = false;
  int n;
  cin >> n;
  rep(i, n) {
    ll x, y;
    cin >> x >> y;
    if (sqrt((x - txa) * (x - txa) + (y - tya) * (y - tya)) +
            sqrt((txb - x) * (txb - x) + (tyb - y) * (tyb - y)) <=
        dis) {
      f = true;
    }
  }
  if (f)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}