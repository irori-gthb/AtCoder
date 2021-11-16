#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;
  vector<vector<int>> F(N);

  rep(i, M) {
    int A, B;
    cin >> A >> B;
    A--;
    B--;
    F[A].push_back(B);
    F[B].push_back(A);
  }

  rep(i, N) {
    set<int> st;
    for (auto x : F[i]) {
      st.insert(x);
      for (auto y : F[x]) st.insert(y);
    }
    int k = st.size() - F[i].size();
    cout << max(k - 1, 0) << endl;
  }
  return 0;
}