#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;

  vector<int> H(N);
  rep(i, N) cin >> H[i];
  sort(H.begin(), H.end());

  ll ans = 0;
  rep(i, N - K) ans += H[i];
  cout << ans << endl;
  return 0;
}