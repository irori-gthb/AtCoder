#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, T;
  cin >> N >> T;

  int calc = 0;
  vector<int> A(N), B(N), diff(N);
  rep(i, N) {
    cin >> A[i] >> B[i];
    calc += A[i];
    diff[i] = A[i] - B[i];
  }
  sort(diff.rbegin(), diff.rend());

  int ans = 0;
  if (calc <= T) {
    cout << ans << endl;
    return 0;
  }
  rep(i, N) {
    calc -= diff[i];
    ans++;
    if (calc <= T) {
      cout << ans << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}