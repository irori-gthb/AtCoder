#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  if (M == 0) {
    cout << 1 << endl;
    return 0;
  }

  vector<int> A(M);
  rep(i, M) cin >> A[i];
  sort(A.begin(), A.end());

  if (N == M) {
    cout << 0 << endl;
    return 0;
  }

  int k = INT_MAX;
  if (A[0] != 1) k = A[0] - 1;
  for (ll i = 1; i < M; i++)
    if (A[i] - A[i - 1] != 1) k = min(k, A[i] - A[i - 1] - 1);
  if (N != A[M - 1]) k = min(k, N - A[M - 1]);

  ll ans = 0;
  ans += (A[0] - 1) / k + min(1, (A[0] - 1) % k);
  for (ll i = 1; i < M; i++)
    ans += (A[i] - A[i - 1] - 1) / k + min(1, (A[i] - A[i - 1] - 1) % k);
  ans += (N - A[M - 1]) / k + min(1, (N - A[M - 1]) % k);
  cout << ans << endl;
  return 0;
}