#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, T;
  cin >> N;

  vector<int> S(N);
  rep(i, N) cin >> S[i];
  cin >> T;

  set<int> st;
  rep(i, N) st.insert(S[i] / T);

  cout << st.size() << endl;
  return 0;
}