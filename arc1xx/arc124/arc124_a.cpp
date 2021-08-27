#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> a(N, 0);
  vector<int> b(N, 0);

  rep(i, K) {
    char c;
    int k;
    cin >> c >> k;
    k--;
    b[k] = 1;
    rep(j, N) {
      if (c == 'L' && k <= j) a[j]++;
      if (c == 'R' && j <= k) a[j]++;
    }
  }

  const ll mod = 998244353;
  ll ans = 1;
  rep(i, N) if (!b[i]) ans = ans * a[i] % mod;
  cout << ans << endl;
  return 0;
}