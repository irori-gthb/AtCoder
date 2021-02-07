#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> P(N);
  rep(i, N) cin >> P[i];

  int min_P = INT_MAX;
  int ans = 0;
  rep(i, N) {
    min_P = min(min_P, P[i]);
    if (min_P >= P[i]) ans++;
  }
  cout << ans << endl;
  return 0;
}