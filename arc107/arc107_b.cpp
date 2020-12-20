#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll N, K;
  cin >> N >> K;
  K = abs(K);

  ll ans = 0;
  vector<ll> mem(2 * N + 1);
  for (int i = 1; i <= N; i++) mem[i] = i - 1;
  for (int i = N + 1; i <= 2 * N; i++) mem[i] = 2 * N + 1 - i;

  for (ll i = 2 + K; i <= 2 * N; i++) {
    ans += mem[i] * mem[i - K];
  }
  cout << ans << endl;
  return 0;
}