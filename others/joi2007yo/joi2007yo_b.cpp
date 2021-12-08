#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int a;
  set<int> st;
  rep(i, 28) {
    cin >> a;
    st.insert(a);
  }

  for (int i = 1; i <= 30; i++)
    if (st.find(i) == st.end()) cout << i << endl;

  return 0;
}