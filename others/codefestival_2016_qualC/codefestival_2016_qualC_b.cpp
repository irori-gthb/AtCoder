#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int K, T;
  cin >> K >> T;

  vector<int> a(T);
  rep(i, T) cin >> a[i];

  int ma = 0;
  rep(i, T) ma = max(a[i], ma);

  cout << max(0, 2 * ma - K - 1) << endl;
  return 0;
}