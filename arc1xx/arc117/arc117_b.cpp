#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<ll> A(N);
  rep(i, N) cin >> A[i];
  sort(A.rbegin(), A.rend());

  ll ans = A[N - 1] + 1;
  rep(i, N - 1) {
    ans *= (A[i] - A[i + 1] + 1);
    ans %= 1000000007;
  }
  cout << ans << endl;
  return 0;
}