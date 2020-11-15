#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<double> x(N);
  vector<double> y(N);
  rep(i, N) cin >> x[i] >> y[i];

  vector<int> v(N);
  rep(i, N) v[i] = i;

  double sum = 0;
  int cnt = 0;
  do {
    rep(i, N - 1) {
      double calc =
          pow(x[v[i]] - x[v[i + 1]], 2) + pow(y[v[i]] - y[v[i + 1]], 2);
      sum += sqrt(calc);
    }
    cnt++;
  } while (next_permutation(v.begin(), v.end()));

  cout << setprecision(10) << sum / cnt << endl;
  return 0;
}