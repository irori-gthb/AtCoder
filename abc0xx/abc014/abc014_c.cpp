#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;

  vector<int> c(1000002);
  int a, b, cnt = 0, ans = 0;
  rep(i, n) {
    cin >> a >> b;
    c[a]++;
    c[b + 1]--;
  }

  rep(i, 1000002) {
    cnt += c[i];
    ans = max(ans, cnt);
  }
  cout << ans << endl;
  return 0;
}