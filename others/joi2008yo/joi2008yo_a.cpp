#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  n = 1000 - n;

  int ans = 0;
  int coin[] = {500, 100, 50, 10, 5, 1};
  rep(i, 6) {
    ans += n / coin[i];
    n %= coin[i];
  }
  cout << ans << endl;
  return 0;
}