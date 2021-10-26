#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> A(N);
  set<int> st, ans;
  int x;
  rep(i, N) {
    cin >> x;
    st.insert(x);
  }

  rep(i, M) {
    cin >> x;
    if (st.count(x) != 0) ans.insert(x);
  }

  for (int a : ans) cout << a << " ";
  cout << endl;
  return 0;
}