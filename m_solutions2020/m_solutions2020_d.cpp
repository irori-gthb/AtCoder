#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<ll> A(N);
  rep(i, N) cin >> A[i];

  ll stock = 0;
  ll ans = 1000;
  rep(i, N - 1) {
    if (A[i] < A[i + 1]) ans = ans / A[i] * A[i + 1] + ans % A[i];
  }
  cout << ans << endl;
  return 0;
}