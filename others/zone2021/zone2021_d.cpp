#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  deque<char> d;
  bool rev = false;
  for (char c : S) {
    if (c == 'R')
      rev = !rev;
    else {
      if (rev)
        d.push_front(c);
      else
        d.push_back(c);
    }
  }
  if (rev) reverse(d.begin(), d.end());

  string ans;
  for (char c : d) {
    if (ans.size() != 0 && ans.back() == c)
      ans.pop_back();
    else
      ans += c;
  }
  cout << ans << endl;
  return 0;
}