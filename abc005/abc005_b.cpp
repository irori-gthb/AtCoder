#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int T;
  int ans = INT_MAX;
  rep(i, N) {
    cin >> T;
    ans = min(ans, T);
  }

  cout << ans << endl;
  return 0;
}