#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll N;
  cin >> N;
  vector<ll> A(N);
  rep(i, N) cin >> A[i];

  vector<ll> sum(N);
  sum[0] = A[0];
  rep(i, N - 1) sum[i + 1] = A[i + 1] + sum[i];

  ll calc = 0, mx = 0;
  rep(i, N) {
    mx = max(mx, A[i]);
    calc += sum[i];
    cout << calc + mx * (i + 1) << endl;
  }
  return 0;
}