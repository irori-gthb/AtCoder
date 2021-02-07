#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string A;
  int B;
  cin >> A >> B;

  cout << A[(B - 1) % A.size()] << endl;
  return 0;
}