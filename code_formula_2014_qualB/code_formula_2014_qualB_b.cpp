#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string N;
  cin >> N;

  int e = 0, o = 0;
  rep(i, N.size()) {
    if (i % 2 == 0)
      o += N[N.size() - 1 - i] - '0';
    else
      e += N[N.size() - 1 - i] - '0';
  }
  cout << e << " " << o << endl;
  return 0;
}