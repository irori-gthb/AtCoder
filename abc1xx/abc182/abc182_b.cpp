#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int m = 0;
  vector<int> A(N);
  rep(i, N) {
    cin >> A[i];
    m = max(m, A[i]);
  }

  int ans = 0;
  int mem = 0;
  for (int i = 2; i <= m; i++) {
    int cnt = 0;
    rep(j, N) {
      if (A[j] % i == 0) cnt++;
    }
    if (mem < cnt) {
      ans = i;
      mem = cnt;
    }
  }
  cout << ans << endl;
  return 0;
}