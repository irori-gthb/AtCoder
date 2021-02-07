#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  ll A;
  map<ll, int, greater<ll>> mp;

  rep(i, N) {
    cin >> A;
    mp[A]++;
  }

  ll h = 0;
  for (auto x : mp) {
    if (x.second >= 4) {
      if (h == 0) {
        cout << x.first * x.first << endl;
        return 0;
      } else {
        cout << x.first * h << endl;
        return 0;
      }
    }
    if (x.second >= 2) {
      if (h == 0)
        h = x.first;
      else {
        cout << h * x.first << endl;
        return 0;
      }
    }
  }
  cout << 0 << endl;
  return 0;
}