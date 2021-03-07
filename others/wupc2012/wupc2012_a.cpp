#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int Ma, Da, Mb, Db;
  cin >> Ma >> Da >> Mb >> Db;

  vector<int> month = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  int ans = 0;
  for (int i = Ma; i < Mb; i++) ans += month[i - 1];

  cout << ans + Db - Da << endl;
  return 0;
}