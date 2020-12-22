#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  map<int, int> mp;
  int A;
  rep(i, N) {
    cin >> A;
    mp[A]++;
  }

  int ans = 0;
  for (auto x : mp) {
    if (mp[x.first] > x.first)
      ans += (mp[x.first] - x.first);
    else if (mp[x.first] < x.first)
      ans += x.second;
  }
  cout << ans << endl;
  return 0;
}