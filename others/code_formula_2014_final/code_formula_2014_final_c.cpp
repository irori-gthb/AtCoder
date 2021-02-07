#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string S;
  getline(cin, S);
  string str = regex_replace(S, regex("@"), " @");

  set<string> ans;
  string tmp = "";
  bool f = false;
  rep(i, S.size()) {
    if (S[i] != ' ') {
      if (S[i] == '@') {
        f = true;
        if (!tmp.empty()) ans.insert(tmp);
        tmp.clear();
      }
      if (f && S[i] != '@') tmp += S[i];
    } else {
      if (f && !tmp.empty()) {
        ans.insert(tmp);
        tmp.clear();
      }
      f = false;
    }
  }
  if (!tmp.empty()) ans.insert(tmp);
  for (string s : ans) cout << s << endl;
  return 0;
}