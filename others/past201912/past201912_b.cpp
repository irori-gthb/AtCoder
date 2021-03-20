#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<ll> A(N);
  rep(i, N) cin >> A[i];

  rep(i, N - 1) {
    if (A[i + 1] > A[i]) cout << "up " << A[i + 1] - A[i] << endl;
    if (A[i + 1] == A[i]) cout << "stay" << endl;
    if (A[i + 1] < A[i]) cout << "down " << A[i] - A[i + 1] << endl;
  }
  return 0;
}