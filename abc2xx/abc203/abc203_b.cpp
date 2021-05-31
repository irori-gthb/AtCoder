#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;

  cout << 100 * N * (N + 1) / 2 * K + K * (K + 1) * N / 2 << endl;
  return 0;
}