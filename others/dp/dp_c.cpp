#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<int> a(N);
  vector<int> b(N);
  vector<int> c(N);
  rep(i, N) cin >> a[i] >> b[i] >> c[i];

  vector<int> mha(N);
  vector<int> mhb(N);
  vector<int> mhc(N);
  mha[0] = a[0];
  mhb[0] = b[0];
  mhc[0] = c[0];
  rep(i, N - 1) {
    mha[i + 1] = max(mhb[i], mhc[i]) + a[i + 1];
    mhb[i + 1] = max(mhc[i], mha[i]) + b[i + 1];
    mhc[i + 1] = max(mha[i], mhb[i]) + c[i + 1];
  }
  cout << max({mha[N - 1], mhb[N - 1], mhc[N - 1]}) << endl;
  return 0;
}