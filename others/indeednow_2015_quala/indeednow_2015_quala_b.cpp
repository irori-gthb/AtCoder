#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

bool Check(string s) {
  map<char, int> mp;
  for (int i = 0; i < s.size(); i++) {
    mp[s[i]]++;
  }

  if (mp['i'] == 1 && mp['n'] == 2 && mp['d'] == 2 && mp['e'] == 2 &&
      mp['o'] == 1 && mp['w'] == 1)
    return true;
  else
    return false;
}

int main() {
  int N;
  cin >> N;

  vector<string> S(N);
  rep(i, N) cin >> S[i];

  rep(i, N) {
    if (Check(S[i])) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}