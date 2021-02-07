#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string S;
  int N;
  cin >> S >> N;

  cout << S[(N - 1) / 5] << S[(N - 1) % 5] << endl;
  return 0;
}