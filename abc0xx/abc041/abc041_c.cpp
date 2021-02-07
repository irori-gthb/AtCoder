#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<pair<int, int>> a(N);
  rep(i, N) {
    int t;
    cin >> t;
    a[i] = {t, i + 1};
  }
  sort(a.begin(), a.end(), greater<>());

  rep(i, N) cout << a[i].second << endl;
  return 0;
}