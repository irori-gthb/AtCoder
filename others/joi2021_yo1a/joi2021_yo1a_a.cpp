#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  cout << A + B + C - max({A, B, C}) - min({A, B, C}) << endl;
  return 0;
}