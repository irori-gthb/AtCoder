#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> a(M), b(M);
  rep(i, M) cin >> a[i] >> b[i];

  set<int> st1, st2;
  rep(i, M) {
    if (a[i] == 1) st1.insert(b[i]);
    if (b[i] == 1) st1.insert(a[i]);
  }
  rep(i, M) {
    if (st1.find(a[i]) != st1.end()) st2.insert(b[i]);
    if (st1.find(b[i]) != st1.end()) st2.insert(a[i]);
  }

  if (st2.find(N) != st2.end())
    cout << "POSSIBLE" << endl;
  else
    cout << "IMPOSSIBLE" << endl;
  return 0;
}