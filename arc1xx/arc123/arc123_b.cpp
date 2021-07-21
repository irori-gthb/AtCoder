#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<ll> A(N), B(N), C(N);
  rep(i, N) cin >> A[i];
  rep(i, N) cin >> B[i];
  rep(i, N) cin >> C[i];
  sort(A.begin(), A.end());
  sort(B.begin(), B.end());
  sort(C.begin(), C.end());

  int idb = 0, idc = 0, ans = 0;
  rep(i, N) {
    while (idb < N && A[i] >= B[idb]) idb++;
    while (idb < N && idc < N && B[idb] >= C[idc]) idc++;
    if (idb == N || idc == N) break;
    idb++, idc++, ans++;
  }
  cout << ans << endl;
  return 0;
}