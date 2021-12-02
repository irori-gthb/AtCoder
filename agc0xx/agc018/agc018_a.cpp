#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}

int main() {
  int N, K;
  cin >> N >> K;

  vector<int> A(N);
  rep(i, N) cin >> A[i];

  int g = A[0], m = A[0];
  for (int i = 1; i < N; i++) {
    g = gcd(g, A[i]);
    m = max(m, A[i]);
  }

  if (K <= m && K % g == 0)
    cout << "POSSIBLE" << endl;
  else
    cout << "IMPOSSIBLE" << endl;

  return 0;
}