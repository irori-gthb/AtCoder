#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> a(N);
  rep(i, N) cin >> a[i];

  bool zero = true;
  rep(i, N) if (a[i] != 0) zero = false;
  if (zero) {
    cout << "Yes" << endl;
    return 0;
  }

  if (N % 3 == 0) {
    map<int, int> mp;
    rep(i, N) mp[a[i]]++;
    bool ok = true;
    ll calc = 0;
    for (auto x : mp) {
      if (x.second % (N / 3) != 0) ok = false;
      rep(i, x.second / (N / 3)) calc ^= x.first;
    }
    if (ok && calc == 0) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}