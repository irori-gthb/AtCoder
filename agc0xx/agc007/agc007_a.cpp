#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int H, W;
  cin >> H >> W;

  int cnt = 0;
  rep(i, H * W) {
    char c;
    cin >> c;
    cnt += (c == '#');
  }

  if (cnt == H + W - 1)
    cout << "Possible" << endl;
  else
    cout << "Impossible" << endl;
  return 0;
}