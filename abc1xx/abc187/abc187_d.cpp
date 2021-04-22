#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll N;
  cin >> N;

  ll calc = 0;
  vector<ll> x(N);
  for (ll i = 0; i < N; i++) {
    ll A, B;
    cin >> A >> B;
    calc -= A;
    x[i] = A + A + B;
  }
  sort(x.rbegin(), x.rend());

  ll ans = 0;
  rep(i, N) {
    calc += x[i];
    if (calc > 0) {
      cout << i + 1 << endl;
      return 0;
    }
  }
  return 0;
}