#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;

  vector<string> S(n);
  rep(i, n) cin >> S[i];

  map<char, int> mp;
  for (char c = 'a'; c <= 'z'; c++) mp[c] = INT_MAX;

  rep(i, n) {
    for (char c = 'a'; c <= 'z'; c++) {
      mp[c] = min(mp[c], (int)count(S[i].begin(), S[i].end(), c));
    }
  }
  for (char c = 'a'; c <= 'z'; c++) rep(i, mp[c]) cout << c;
  cout << endl;
  return 0;
}