#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  vector<pair<int, char>> mem;
  rep(i, S.size() - 2) if (S[i] == S[i + 1] && S[i + 1] != S[i + 2])
      mem.push_back(make_pair(i, S[i]));

  ll ans = 0;
  rep(i, mem.size()) {
    if (i != mem.size() - 1) {
      if (mem[i].second != mem[i + 1].second) {
        string str =
            S.substr(mem[i].first + 2, mem[i + 1].first - mem[i].first - 2);
        ans -= count(str.begin(), str.end(), mem[i].second);
        ans += S.size() - mem[i].first - 2;
      } else {
        ans += mem[i + 1].first - mem[i].first - 2;
        string str =
            S.substr(mem[i].first + 2, mem[i + 1].first - mem[i].first - 2);
        ans -= count(str.begin(), str.end(), mem[i].second);
      }
    } else {
      ans += S.size() - mem[i].first - 2;
      string str = S.substr(mem[i].first + 2);
      ans -= count(str.begin(), str.end(), mem[i].second);
    }
  }
  cout << ans << endl;
  return 0;
}