#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, X;
  cin >> N >> X;

  vector<int> A(N);
  rep(i, N) cin >> A[i];

  vector<int> ans;
  rep(i, N) if (A[i] != X) ans.push_back(A[i]);
  if (ans.size() == 0) {
    cout << endl;
    return 0;
  }
  rep(i, ans.size()) {
    cout << ans[i];
    if (i != ans.size() - 1) cout << " ";
  }
  return 0;
}