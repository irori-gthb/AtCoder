#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  set<string> st;

  for (int i = 1; i <= 1000; i++) {
    st.insert(to_string(i));
  }
  for (string x : st) cout << x << endl;
  return 0;
}