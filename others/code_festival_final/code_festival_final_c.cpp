#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll A;
  cin >> A;

  for (ll i = 10; i <= 10000; i++) {
    ll calc = 0, x = i, y = 1;
    while (x) {
      calc += (x % 10) * y;
      y *= i;
      x /= 10;
    }
    if (calc == A) {
      cout << i << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}