#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<pair<pair<string, int>, int>> SP(N);

  rep(i, N) {
    cin >> SP[i].first.first >> SP[i].first.second;
    SP[i].first.second = -SP[i].first.second;
    SP[i].second = i + 1;
  }

  sort(SP.begin(), SP.end());
  rep(i, N) cout << SP[i].second << endl;
  return 0;
}