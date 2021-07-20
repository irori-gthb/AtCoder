#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll A1, A2, A3;
  cin >> A1 >> A2 >> A3;

  ll calc = 2 * A2 - A1 - A3;
  if (calc >= 0)
    cout << calc << endl;
  else {
    if (calc % 2 == 0)
      cout << -calc / 2 << endl;
    else
      cout << -calc / 2 + 2 << endl;
  }
  return 0;
}