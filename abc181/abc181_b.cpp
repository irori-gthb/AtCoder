#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<ll> A(N);
  vector<ll> B(N);
  rep(i, N) cin >> A[i] >> B[i];

  ll ans = 0;
  rep(i, N) ans += (A[i] + B[i]) * (B[i] - A[i] + 1) / 2;
  cout << ans << endl;
  return 0;
}