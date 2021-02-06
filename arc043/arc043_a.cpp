#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  double A, B;
  cin >> N >> A >> B;

  vector<double> S(N);
  double maxS = INT_MIN, minS = INT_MAX;
  double calc = 0;
  rep(i, N) {
    cin >> S[i];
    maxS = max(S[i], maxS);
    minS = min(S[i], minS);
    calc += S[i];
  }
  double ave = calc / N;
  if (maxS - minS == 0) {
    cout << -1 << endl;
    return 0;
  }

  double P = B / (maxS - minS);
  double Q = A - P * ave;

  cout << fixed << setprecision(10) << P << ' ' << Q << endl;
  return 0;
}