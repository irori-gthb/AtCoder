#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<int> b(N);
  rep(i, N) cin >> b[i];
  rep(i, N) b[i]--;

  vector<int> ans;
  while (!b.empty()) {
    for (int i = b.size() - 1; i >= 0; i--) {
      if (i == b[i]) {
        b.erase(b.begin() + i);
        ans.push_back(i + 1);
        break;
      }
      if (i == 0) {
        cout << -1 << endl;
        return 0;
      }
    }
  }
  rep(i, N) cout << ans[N - 1 - i] << endl;
  return 0;
}