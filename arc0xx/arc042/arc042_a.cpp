#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> a(M);
  vector<bool> S(N, false);
  rep(i, M) cin >> a[i];

  for (int i = M - 1; i >= 0; i--) {
    if (!S[a[i] - 1]) cout << a[i] << endl;
    S[a[i] - 1] = true;
  }
  rep(i, N) if (!S[i]) cout << i + 1 << endl;

  return 0;
}