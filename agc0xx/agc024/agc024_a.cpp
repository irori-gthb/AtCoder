#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll A, B, C, K;
  cin >> A >> B >> C >> K;

  if (K % 2 == 0)
    cout << A - B << endl;
  else
    cout << B - A << endl;
}