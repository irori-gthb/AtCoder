#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int x1, y1, r, x2, y2, x3, y3;
  cin >> x1 >> y1 >> r >> x2 >> y2 >> x3 >> y3;

  bool red = false, blue = false;
  for (int x = -200; x <= 200; x++) {
    for (int y = -200; y <= 200; y++) {
      if ((x <= x2 || x3 <= x || y <= y2 || y3 <= y) &&
          (x1 - x) * (x1 - x) + (y1 - y) * (y1 - y) < r * r)
        red = true;
      if (x2 <= x && x <= x3 && y2 <= y && y <= y3 &&
          (x1 - x) * (x1 - x) + (y1 - y) * (y1 - y) >= r * r)
        blue = true;
      if (red && blue) break;
    }
  }
  if (red)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  if (blue)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}