#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  int ans = 0;
  rep(i, S.size() - 3) if (S.substr(i, 4) == "ZONe") ans++;
  cout << ans << endl;
  return 0;
}