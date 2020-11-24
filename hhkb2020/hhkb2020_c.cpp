#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> p(N);
  rep(i, N) cin >> p[i];

  vector<int> mex(200001);
  int ans = 0;
  rep(i, N) {
    mex[p[i]]++;
    while (mex[ans]) ans++;
    cout << ans << endl;
  }
  return 0;
}