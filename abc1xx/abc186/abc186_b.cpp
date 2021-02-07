#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int H, W;
  cin >> H >> W;

  vector<vector<int>> A(H, vector<int>(W));
  rep(i, H) rep(j, W) cin >> A[i][j];

  int calc = 0;
  int mem = INT_MAX;
  rep(i, H) rep(j, W) {
    calc += A[i][j];
    mem = min(mem, A[i][j]);
  }
  cout << calc - H * W * mem << endl;
  return 0;
}