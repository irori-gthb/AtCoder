#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<ll> A(N), B(N);
  rep(i, N) cin >> A[i] >> B[i];

  ll ans = 0;
  rep(i, N) {
    if ((A[N - 1 - i] + ans) % B[N - 1 - i] != 0)
      ans += (B[N - 1 - i] - (A[N - 1 - i] + ans) % B[N - 1 - i]);
  }
  cout << ans << endl;
  return 0;
}