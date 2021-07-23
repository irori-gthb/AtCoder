#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, M, K;
  cin >> N >> M >> K;

  rep(i, N + 1) rep(j, M + 1) {
    if (K == i * M + j * N - 2 * i * j) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}