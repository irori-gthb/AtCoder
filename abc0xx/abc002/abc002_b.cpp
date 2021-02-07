#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string W;
  cin >> W;

  rep(i, W.size()) {
    if (W[i] == 'a' || W[i] == 'i' || W[i] == 'u' || W[i] == 'e' || W[i] == 'o')
      continue;
    cout << W[i];
  }

  cout << endl;
  return 0;
}