#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, V, W, X, Y, Z;
  cin >> N;

  int ans = 0;
  rep(i, N) {
    cin >> V >> W >> X >> Y >> Z;
    if (V + W + X + Y + Z < 20) ans++;
  }
  cout << ans << endl;
  return 0;
}