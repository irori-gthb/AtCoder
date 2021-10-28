#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int X, Y;
  cin >> X >> Y;

  int xc = 0, yc = 0;

  for (int i = 1; i <= X; i++)
    if (X % i == 0) xc++;

  for (int i = 1; i <= Y; i++)
    if (Y % i == 0) yc++;

  if (xc > yc)
    cout << "X" << endl;
  else if (xc < yc)
    cout << "Y" << endl;
  else
    cout << "Z" << endl;
  return 0;
}