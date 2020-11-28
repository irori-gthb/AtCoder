#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int X;
  cin >> X;

  int calc = X / 100;
  if (100 * calc <= X && X <= 105 * calc)
    cout << 1 << endl;
  else
    cout << 0 << endl;
  return 0;
}