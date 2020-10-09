#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll a, b;
  cin >> a >> b;

  if (0 < a) {
    cout << "Positive" << endl;
  } else if (b < 0) {
    if ((b - a + 1) % 2 == 0)
      cout << "Positive" << endl;
    else
      cout << "Negative" << endl;
  } else {
    cout << "Zero" << endl;
  }
  return 0;
}