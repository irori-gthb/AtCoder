#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int C[N][N];
  rep(i, N) rep(j, N) cin >> C[i][j];

  int m = INT_MAX;
  rep(i, N) m = min(m, C[i][0]);

  vector<int> A(N), B(N);
  rep(i, N) A[i] = C[i][0] - m;
  rep(i, N) B[i] = C[0][i] - A[0];

  rep(i, N) rep(j, N) {
    if (C[i][j] != A[i] + B[j]) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  rep(i, N) cout << A[i] << " ";
  cout << endl;
  rep(i, N) cout << B[i] << " ";
  cout << endl;
  return 0;
}