#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll H, W, N;
  cin >> H >> W >> N;

  vector<int> A(N), B(N);
  map<int, int> mpa, mpb;
  rep(i, N) cin >> A[i] >> B[i], mpa[A[i]] = 0, mpb[B[i]] = 0;

  int cnt = 1;
  for (auto &x : mpa) x.second = cnt++;
  cnt = 1;
  for (auto &x : mpb) x.second = cnt++;
  rep(i, N) cout << mpa[A[i]] << " " << mpb[B[i]] << endl;
  return 0;
}