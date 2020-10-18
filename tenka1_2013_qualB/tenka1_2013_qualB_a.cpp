#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  set<string> st;

  string s;
  rep(i, 15) {
    cin >> s;
    st.insert(s);
  }

  int cnt = 1;
  for (string x : st) {
    if (cnt == 7) {
      cout << x << endl;
      return 0;
    }
    cnt++;
  }
  return 0;
}