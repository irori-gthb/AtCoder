#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  double sx, sy, gx, gy;
  cin >> sx >> sy >> gx >> gy;

  cout << setprecision(10) << (double)(gx + (sx - gx) * gy / (gy + sy)) << endl;
  return 0;
}