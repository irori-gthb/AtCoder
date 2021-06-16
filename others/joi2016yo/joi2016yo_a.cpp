#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int A, B, C, D, E, F;
  cin >> A >> B >> C >> D >> E >> F;

  cout << A + B + C + D + E + F - min({A, B, C, D}) - min(E, F) << endl;
  return 0;
}