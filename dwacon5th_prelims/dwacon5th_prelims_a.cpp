#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  double N;
  cin >> N;

  double sum = 0;
  vector<double> a(N);
  rep(i, N) {
    cin >> a[i];
    sum += a[i];
  }

  int ans = 0;
  double ma = INT_MAX;
  double avg = sum / N;
  rep(i, N) {
    if (ma > abs(avg - a[i])) {
      ans = i;
      ma = abs(avg - a[i]);
    }
  }
  cout << ans << endl;
  return 0;
}