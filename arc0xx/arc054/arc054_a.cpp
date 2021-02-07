#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  double L, X, Y, S, D;
  cin >> L >> X >> Y >> S >> D;

  if (S < D) {
    if (Y > X)
      cout << fixed << setprecision(10)
           << min((D - S) / (X + Y), (L - D + S) / (Y - X)) << endl;
    else
      cout << fixed << setprecision(10) << (D - S) / (X + Y) << endl;
  } else {
    if (Y > X)
      cout << fixed << setprecision(10)
           << min((L - S + D) / (X + Y), (S - D) / (Y - X)) << endl;
    else
      cout << fixed << setprecision(10) << (L - S + D) / (X + Y) << endl;
  }
  return 0;
}