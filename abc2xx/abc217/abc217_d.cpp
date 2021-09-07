#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int L, Q;
  cin >> L >> Q;

  vector<int> c(Q), x(Q);
  rep(i, Q) cin >> c[i] >> x[i];

  set<int> st;
  st.insert(0);
  st.insert(L);
  rep(i, Q) {
    if (c[i] == 1)
      st.insert(x[i]);
    else {
      auto it = st.lower_bound(x[i]);
      cout << *it - *prev(it) << endl;
    }
  }
  return 0;
}