#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> t(N + 1, 0);
  vector<int> x(N + 1, 0);
  vector<int> y(N + 1, 0);
  rep(i, N) cin >> t[i + 1] >> x[i + 1] >> y[i + 1];

  bool f = true;
  rep(i, N) {
    if (abs(x[i + 1] - x[i]) + abs(y[i + 1] - y[i]) > t[i + 1] - t[i] ||
        (abs(x[i + 1] - x[i]) + abs(y[i + 1] - y[i])) % 2 !=
            (t[i + 1] - t[i]) % 2)
      f = false;
  }
  if (f)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}