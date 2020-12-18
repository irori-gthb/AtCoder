#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  if (N == 1) {
    cout << "Not Prime" << endl;
    return 0;
  } else if (N == 2 || N == 3 || N == 5) {
    cout << "Prime" << endl;
    return 0;
  }

  if (N % 2 != 0 && N % 3 != 0 && N % 5 != 0) {
    cout << "Prime" << endl;
  } else {
    cout << "Not Prime" << endl;
  }
  return 0;
}