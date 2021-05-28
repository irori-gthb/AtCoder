#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int A = 0, ans = 0, cnt = 0;
  rep(i, N) {
    cin >> A;
    if (A == 0) {
      ans = max(ans, cnt + 1);
      cnt = 0;
    } else
      cnt++;
  }
  ans = max(ans, cnt + 1);
  cout << ans << endl;
  return 0;
}