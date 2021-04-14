#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  double R, X, Y;
  cin >> R >> X >> Y;
  double d = sqrt(X * X + Y * Y);
  if (d < R)
    cout << 2 << endl;
  else
    cout << ceil(d / R) << endl;
  return 0;
}