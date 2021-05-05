#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll x;
  cin >> x;

  ll ans;

  ans = x / 11;
  ans *= 2;
  int calc = x % 11;
  if (0 < calc && calc < 7)
    ans++;
  else if (7 <= calc)
    ans += 2;

  cout << ans;
  return 0;
}