#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> c(2001, 0);
  int A;
  rep(i, N) cin >> A, c[A]++;

  int mem = INT_MAX, ans = 0;
  for (int i = 1; i <= 2000; i++) {
    if (c[i] < mem && c[i] != 0) {
      mem = c[i];
      ans = i;
    }
  }
  cout << ans << endl;
  return 0;
}