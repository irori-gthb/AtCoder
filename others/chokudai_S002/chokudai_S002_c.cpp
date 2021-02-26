#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  ll ans = 0;
  rep(i, N) {
    ll A, B;
    cin >> A >> B;
    ans = max(ans, A + B);
  }

  cout << ans << endl;
  return 0;
}