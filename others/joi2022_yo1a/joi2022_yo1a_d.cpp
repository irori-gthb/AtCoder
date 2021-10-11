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

  int ans = 0;

  rep(i, N) {
    rep(j, M) {
      if (A[i] == B[j]) {
        ans++;
        break;
      }
    }
  }
  cout << ans << endl;
  return 0;
}