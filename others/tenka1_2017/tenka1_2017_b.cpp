#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int A, B;
  int mA = INT_MIN;
  int mB = 0;
  rep(i, N) {
    cin >> A >> B;
    if (A > mA) {
      mA = A;
      mB = B;
    }
  }
  cout << mA + mB << endl;
  return 0;
}