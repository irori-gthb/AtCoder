#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<double> A(N);
  rep(i, N) cin >> A[i];

  double calc = 0;
  rep(i, N - 1) calc += (A[1 + i] - A[i]);

  cout << fixed << setprecision(5) << calc / (N - 1) << endl;
  return 0;
}