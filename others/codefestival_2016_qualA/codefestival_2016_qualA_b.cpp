#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int a;
  map<int, int> mp;
  rep(i, N) {
    cin >> a;
    mp[i + 1] = a;
  }

  int ans = 0;
  rep(i, N) {
    if (i + 1 == mp[mp[i + 1]]) ans++;
  }
  cout << ans / 2 << endl;
  return 0;
}