#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int T, A, B, C, D;
  cin >> T >> A >> B >> C >> D;

  if (A + C <= T)
    cout << B + D << endl;
  else if (C <= T)
    cout << D << endl;
  else if (A <= T)
    cout << B << endl;
  else
    cout << 0 << endl;
  return 0;
}