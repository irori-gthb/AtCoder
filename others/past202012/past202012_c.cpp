#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  if (N == 0) {
    cout << 0 << endl;
    return 0;
  }

  string base = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  string ans;
  while (N) {
    ans = base[N % 36] + ans;
    N /= 36;
  }
  cout << ans << endl;
  return 0;
}