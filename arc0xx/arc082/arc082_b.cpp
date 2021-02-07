#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> p(N);
  rep(i, N) cin >> p[i];

  int ans = 0;
  rep(i, N) {
    if (p[i] == i + 1) {
      ans++;
      if (i != N - 1) swap(p[i], p[i + 1]);
    }
  }
  cout << ans << endl;
  return 0;
}