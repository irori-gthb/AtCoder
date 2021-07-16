#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(N), B(M);
  vector<pair<int, int>> mem(2000001, pair<int, int>(-1, -1));

  rep(i, N) cin >> A[i];
  rep(i, M) cin >> B[i];

  rep(i, N) rep(j, M) {
    int calc = A[i] + B[j];
    if (mem[calc].first != -1) {
      cout << mem[calc].first << " " << mem[calc].second << " " << i << " " << j
           << endl;
      return 0;
    }
    mem[calc] = pair<int, int>(i, j);
  }
  cout << -1 << endl;
  return 0;
}