#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  string s;
  cin >> N >> s;

  string ans = "";
  rep(i, N) {
    ans += s[i];
    if (ans.size() >= 3 && ans[ans.size() - 3] == 'f' &&
        ans[ans.size() - 2] == 'o' && ans[ans.size() - 1] == 'x') {
      ans = ans.substr(0, ans.size() - 3);
    }
  }
  cout << ans.size() << endl;
  return 0;
}