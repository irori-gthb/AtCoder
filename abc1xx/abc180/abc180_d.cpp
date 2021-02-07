#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll X, Y, A, B;
  cin >> X >> Y >> A >> B;
  ll ans = 0;

  while ((double)X * A <= pow(10, 18) && A * X <= X + B && X * A < Y) {
    X *= A;
    ans++;
  }
  ans += (Y - X - 1) / B;

  cout << ans << endl;
  return 0;
}