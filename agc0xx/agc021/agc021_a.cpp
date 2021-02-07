#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string N;
  cin >> N;

  bool f = true;
  rep(i, N.size() - 1) if (N[i + 1] != '9') f = false;

  int ans = 0;
  if (f)
    ans = N[0] - '0' + 9 * (N.size() - 1);
  else
    ans = N[0] - '0' + 9 * (N.size() - 1) - 1;

  cout << ans << endl;
  return 0;
}