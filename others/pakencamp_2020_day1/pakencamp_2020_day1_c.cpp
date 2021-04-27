#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int k;
  set<string> mem, calc;
  string str;
  cin >> k;
  rep(i, k) {
    cin >> str;
    mem.insert(str);
  }

  rep(i, N - 1) {
    cin >> k;
    set<string> st;
    rep(i, k) {
      cin >> str;
      st.insert(str);
    }
    for (string x : st) {
      if (mem.find(x) != mem.end()) {
        calc.insert(x);
      }
    }
    mem = calc;
    calc.clear();
  }

  cout << mem.size() << endl;
  return 0;
}