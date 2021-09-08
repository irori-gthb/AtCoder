#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, C, K;
  cin >> N >> C >> K;

  vector<int> T(N);
  rep(i, N) cin >> T[i];
  sort(T.begin(), T.end());

  int ans = 0, cnt = 0;
  rep(i, N) {
    if (cnt < C && T[i] - T[i - cnt] <= K)
      cnt++;
    else {
      ans++;
      cnt = 1;
    }
  }
  cout << ans + min(1, cnt) << endl;
  return 0;
}