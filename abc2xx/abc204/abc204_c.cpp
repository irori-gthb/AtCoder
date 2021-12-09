#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<vector<int>> to(N);
  rep(i, M) {
    int a, b;
    cin >> a >> b;
    a--, b--;
    to[a].push_back(b);
  }

  int ans = 0;
  rep(i, N) {
    queue<int> q;
    vector<int> used(N, 0);
    used[i] = 1;
    ans++;
    q.push(i);
    while (q.size()) {
      int v = q.front();
      q.pop();
      for (int u : to[v]) {
        if (used[u]) continue;
        ans++;
        used[u] = 1;
        q.push(u);
      }
    }
  }
  cout << ans << endl;
  return 0;
}