#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> A(N + 2);
  A[0] = 0;
  A[N + 1] = 0;
  rep(i, N) cin >> A[i + 1];

  int calc = 0;
  rep(i, N + 1) calc += abs(A[i + 1] - A[i]);

  rep(i, N) cout << calc - abs(A[i + 1] - A[i]) - abs(A[i + 2] - A[i + 1]) +
                        abs(A[i + 2] - A[i])
                 << endl;
  return 0;
}