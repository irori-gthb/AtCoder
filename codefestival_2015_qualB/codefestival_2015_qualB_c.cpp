#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> A(N), B(M);
  rep(i, N) cin >> A[i];
  rep(i, M) cin >> B[i];
  sort(A.rbegin(), A.rend());
  sort(B.rbegin(), B.rend());

  if (M > N) {
    cout << "NO" << endl;
    return 0;
  }

  int a = 0;
  rep(i, M) {
    if (A[i] < B[i]) {
      cout << "NO" << endl;
      return 0;
    }
  }

  cout << "YES" << endl;
  return 0;
}