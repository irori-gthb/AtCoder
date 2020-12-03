#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int A, B, C, X, Y;
  cin >> A >> B >> C >> X >> Y;

  int ans = 0;
  int k = min(X, Y);
  ans = min(A + B, 2 * C) * k;
  if (X > Y)
    ans += (X - k) * min(A, 2 * C);
  else
    ans += (Y - k) * min(B, 2 * C);

  cout << ans << endl;
  return 0;
}