#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  set<int> st;
  int A;
  rep(i, N) {
    cin >> A;
    decltype(st)::iterator it = st.find(A);
    if (it != st.end())
      st.erase(A);
    else
      st.insert(A);
  }
  cout << st.size() << endl;
  return 0;
}