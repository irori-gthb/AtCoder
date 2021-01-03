#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  rep(i, N) cin >> A[i];

  int ans = 0;
  int mode = 0;
  rep(i, N) {
    if (mode == 0) {
      if (i < N - 1 && A[i] < A[i + 1])
        mode = 1;
      else if (i < N - 1 && A[i] > A[i + 1])
        mode = 2;
    } else if (mode == 1) {
      if (i < N - 1 && A[i] > A[i + 1]) {
        mode = 0;
        ans++;
      }
    } else if (mode == 2) {
      if (i < N - 1 && A[i] < A[i + 1]) {
        mode = 0;
        ans++;
      }
    }
  }
  cout << ans + 1 << endl;
  return 0;
}