#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int D, N;
  cin >> D >> N;

  if (N == 100) N++;
  int calc = 1;
  rep(i, D) calc *= 100;
  cout << calc * N << endl;
  return 0;
}