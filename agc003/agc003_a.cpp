#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  map<char, int> mp;
  rep(i, S.size()) mp[S[i]]++;

  if ((mp['N'] >= 1 && mp['W'] >= 1 && mp['S'] >= 1 && mp['E'] >= 1) ||
      (mp['N'] == 0 && mp['W'] >= 1 && mp['S'] == 0 && mp['E'] >= 1) ||
      (mp['N'] >= 1 && mp['W'] == 0 && mp['S'] >= 1 && mp['E'] == 0))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}