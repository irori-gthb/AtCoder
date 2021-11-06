#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  string S;
  cin >> N >> S;

  int cnt = 0;
  vector<int> mem;
  rep(i, N) if (S[i] == '0') cnt++, mem.push_back(i + 1);
  if (cnt == 1) {
    cout << -1 << endl;
    return 0;
  }

  int cur = 0;
  rep(i, N) {
    if (S[i] == '0') {
      if (cur == 0)
        cout << mem[cnt - 1] << endl, cur++;
      else
        cout << mem[cur - 1] << endl, cur++;
    } else
      cout << i + 1 << endl;
  }
  return 0;
}