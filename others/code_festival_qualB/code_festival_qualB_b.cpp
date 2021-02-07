#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;

  vector<int> a(N);
  rep(i, N) cin >> a[i];

  int calc = 0;
  int ans = 0;
  while (calc < K) {
    calc += a[ans];
    ans++;
  }
  cout << ans << endl;
  return 0;
}
