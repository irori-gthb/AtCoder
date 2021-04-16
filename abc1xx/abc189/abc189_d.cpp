#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<string> S(N);
  rep(i, N) cin >> S[i];

  ll ans = 1;
  rep(i, N) if (S[i] == "OR") ans += (ll)1 << (i + 1);
  cout << ans << endl;
  return 0;
}