#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}

int main() {
  int N, X;
  cin >> N >> X;

  vector<int> x(N + 1);
  x[0] = X;
  rep(i, N) cin >> x[i + 1];
  sort(x.begin(), x.end());

  int ans = x[1] - x[0];
  rep(i, N) ans = gcd(ans, x[i + 1] - x[i]);
  cout << ans << endl;
  return 0;
}