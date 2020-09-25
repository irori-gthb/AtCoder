#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  map<char, int> mp;
  rep(i, S.size()) mp[S[i]]++;

  cout << mp['A'] << " " << mp['B'] << " " << mp['C'] << " " << mp['D'] << " "
       << mp['E'] << " " << mp['F'] << endl;
  return 0;
}