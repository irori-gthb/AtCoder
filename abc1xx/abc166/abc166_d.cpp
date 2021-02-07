#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll X;
  cin >> X;

  for (ll a = -200; a < 200; a++) {
    for (ll b = -200; b < 200; b++) {
      if (powl(a, 5) - powl(b, 5) == X) {
        cout << a << " " << b << endl;
        return 0;
      }
    }
  }
  return 0;
}