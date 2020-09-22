#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  double A, B, C, D;
  cin >> A >> B >> C >> D;

  if (B / A > D / C)
    cout << "TAKAHASHI" << endl;
  else if ((B / A < D / C))
    cout << "AOKI" << endl;
  else
    cout << "DRAW" << endl;
  return 0;
}