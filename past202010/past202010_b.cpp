#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int X, Y;
  cin >> X >> Y;

  if (Y == 0) {
    cout << "ERROR" << endl;
    return 0;
  }
  int ans = (X * 100) / Y;
  cout << fixed << setprecision(2) << (double)ans / 100 << endl;
  return 0;
}