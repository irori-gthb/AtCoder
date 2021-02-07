#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;

  map<int, int> mp;
  int a;
  rep(i, N) {
    cin >> a;
    mp[a]++;
  }
  mp[0] = min(mp[0], K);
  rep(i, N - 1) mp[i + 1] = min({mp[i], mp[i + 1], K});

  int ans = 0;
  rep(i, N) {
    ans += mp[i];
    if (mp[i] == 0) break;
  }
  cout << ans << endl;
  return 0;
}