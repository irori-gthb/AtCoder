#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<ll> A(N);
  rep(i, N) cin >> A[i];
  sort(A.begin(), A.end());

  ll calc = 0;
  ll ans = 0;
  rep(i, N) {
    ans += A[i] * i;
    ans -= calc;
    calc += A[i];
  }

  cout << ans << endl;
  return 0;
}