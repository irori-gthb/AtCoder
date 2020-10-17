#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<ll> x(N);
  ll t;
  rep(i, N) {
    cin >> t;
    x[i] = abs(t);
  }

  ll m = 0;
  ll e = 0;
  ll c = 0;
  rep(i, N) {
    m += abs(x[i]);
    e += x[i] * x[i];
    c = max(c, x[i]);
  }
  cout << m << endl;
  cout << setprecision(20) << sqrt(e) << endl;
  cout << c << endl;
  return 0;
}