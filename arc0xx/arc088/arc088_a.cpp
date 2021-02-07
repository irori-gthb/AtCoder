#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll X, Y;
  cin >> X >> Y;

  ll calc = Y / X;
  int ans = 1;
  while (calc / 2 != 0) {
    ans++;
    calc /= 2;
  }
  cout << ans << endl;
  return 0;
}