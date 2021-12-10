#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll N, K, M, R;
  cin >> N >> K >> M >> R;

  vector<ll> S(N);
  rep(i, N - 1) cin >> S[i];
  sort(S.rbegin(), S.rend());

  ll calc = (ll)R * K;
  rep(i, K - 1) calc -= S[i];

  if (N != K && calc <= (ll)S[K - 1]) {
    cout << 0 << endl;
    return 0;
  }
  if (calc > (ll)M) {
    cout << -1 << endl;
    return 0;
  }
  cout << max(calc, (ll)0) << endl;
  return 0;
}