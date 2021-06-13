#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, X, Y, Z;
  cin >> N >> X >> Y >> Z;

  vector<int> A(N), B(N);
  rep(i, N) cin >> A[i] >> B[i];

  int ans = 0;
  rep(i, N) if (X <= A[i] && Y <= B[i] && Z <= A[i] + B[i]) ans++;
  cout << ans << endl;
  return 0;
}