#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll N, K;
  cin >> N >> K;

  vector<int> A(N);
  rep(i, N) cin >> A[i];

  ll p = 0, q = 0;
  rep(i, N) for (int j = i + 1; j < N; j++) if (A[i] > A[j]) p++;
  rep(i, N) rep(j, N) if (A[i] > A[j]) q++;

  ll mod = 1000000007;
  cout << (p * K % mod + K * (K - 1) / 2 % mod * q % mod) % mod << endl;
  return 0;
}