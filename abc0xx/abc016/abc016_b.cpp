#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  if (A + B == C && A - B == C) {
    cout << "?" << endl;
  } else if (A + B == C) {
    cout << "+" << endl;
  } else if (A - B == C) {
    cout << "-" << endl;
  } else {
    cout << "!" << endl;
  }
  return 0;
}