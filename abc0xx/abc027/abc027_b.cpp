#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> a(N);
  rep(i, N) cin >> a[i];

  int calc = 0;
  rep(i, N) calc += a[i];
  if (calc % N != 0) {
    cout << -1 << endl;
    return 0;
  }
  calc /= N;

  int sum = 0;
  int ans = 0;
  rep(i, N) {
    sum += a[i];
    if (calc * (i + 1) != sum) ans++;
  }

  cout << ans << endl;
  return 0;
}