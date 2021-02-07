#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int x1, x2, y1, y2;
  cin >> x1 >> y1 >> x2 >> y2;

  cout << abs(x2 - x1) + abs(y2 - y1) + 1 << endl;
  return 0;
}