#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  int a1 = 0, a2 = 0;
  rep(i, n) {
    cin >> a[i];
    a1 = max(a1, a[i]);
  }
  rep(i, n) if (a1 != a[i] && abs(a1 / 2 - a[i]) < abs(a1 / 2 - a2)) a2 = a[i];
  cout << a1 << " " << a2 << endl;
  return 0;
}