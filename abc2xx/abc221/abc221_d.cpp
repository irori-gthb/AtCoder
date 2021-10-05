#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<pair<int, int>> x;
  int A, B;
  rep(i, N) {
    cin >> A >> B;
    x.push_back({A, 1});
    x.push_back({A + B, -1});
  }
  sort(x.begin(), x.end());

  int cnt = 0;
  vector<int> ans(N + 1, 0);
  rep(i, x.size() - 1) {
    cnt += x[i].second;
    ans[cnt] += ((x[i + 1].first) - (x[i].first));
  }
  rep(i, N) cout << ans[i + 1] << " ";
  cout << endl;
  return 0;
}