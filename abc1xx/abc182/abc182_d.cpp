#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<ll> A(N);
  vector<ll> sum(N);
  vector<ll> mem(N);
  rep(i, N) {
    cin >> A[i];
    if (i == 0) {
      sum[i] = A[i];
      mem[i] = A[i];
    } else {
      sum[i] = sum[i - 1] + A[i];
      mem[i] = max(mem[i - 1], sum[i]);
    }
  }

  ll ans = 0;
  ll calc = 0;
  rep(i, N) {
    ans = max(ans, calc + mem[i]);
    calc += sum[i];
  }
  cout << ans << endl;
  return 0;
}