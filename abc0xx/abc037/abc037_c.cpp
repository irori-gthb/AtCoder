#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;

  vector<ll> A(N);
  rep(i, N) cin >> A[i];

  ll calc = 0;
  rep(i, K) calc += A[i];
  ll ans = calc;

  rep(i, N - K) {
    calc += (A[i + K] - A[i]);
    ans += calc;
  }

  cout << ans << endl;
  return 0;
}