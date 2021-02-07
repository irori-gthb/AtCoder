#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  rep(i, N) cin >> A[i];

  int calc = 1;
  rep(i, N) {
    if (A[i] % 2 == 0) calc *= 2;
  }

  cout << pow(3, N) - calc << endl;
  return 0;
}