#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> D1(N);
  vector<int> D2(N);
  bool z = false;
  rep(i, N) {
    cin >> D1[i] >> D2[i];
    if (i >= 2 && D1[i - 2] == D2[i - 2] && D1[i - 1] == D2[i - 1] &&
        D1[i] == D2[i]) {
      z = true;
    }
  }

  if (z)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}