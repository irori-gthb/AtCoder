#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> a(N);
  rep(i, N) cin >> a[i];

  vector<int> tmp(100003);
  rep(i, N) {
    tmp[a[i]]++;
    tmp[a[i] + 1]++;
    tmp[a[i] + 2]++;
  }

  int ans = 0;
  rep(i, 100003) ans = max(ans, tmp[i]);
  cout << ans << endl;
  return 0;
}