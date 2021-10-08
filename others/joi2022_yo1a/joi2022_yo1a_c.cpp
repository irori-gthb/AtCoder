#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  string S;
  cin >> N >> S;

  set<char> st;
  rep(i, N) st.insert(S[i]);

  if (st.size() >= 3)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}