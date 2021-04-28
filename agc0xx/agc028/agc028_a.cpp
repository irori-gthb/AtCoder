#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll N, M;
  string S, T;
  cin >> N >> M >> S >> T;

  ll p = __gcd(N, M);

  for (int i = 0, j = 0; i < N && j < M; i += N / p, j += M / p) {
    if (S[i] != T[j]) {
      cout << -1 << endl;
      return 0;
    }
  }

  cout << N * M / p << endl;
  return 0;
}