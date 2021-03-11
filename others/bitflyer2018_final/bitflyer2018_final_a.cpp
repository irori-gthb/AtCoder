#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> p(N);
  rep(i, N) cin >> p[i];

  int ans = INT_MAX;
  rep(i, N) {
    int cnt = 0;
    while (p[i] % 10 == 0) {
      p[i] /= 10;
      cnt++;
    }
    ans = min(ans, cnt);
  }
  cout << ans << endl;
  return 0;
}