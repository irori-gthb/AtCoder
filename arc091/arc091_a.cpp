#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll N, M;
  cin >> N >> M;

  cout << abs((N - 2) * (M - 2)) << endl;
  return 0;
}