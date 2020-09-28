#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int X;
  cin >> X;

  int ans = 0;
  while (ans * (ans + 1) / 2 < X) ans++;
  cout << ans << endl;
  return 0;
}