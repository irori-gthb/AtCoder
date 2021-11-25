#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, K;
  string S;
  cin >> N >> K >> S;

  int r = 0;
  rep(i, N - 1) if (S[i] == 'R') r++;

  if (K == r)
    cout << 'W' << endl;
  else
    cout << 'R' << endl;

  return 0;
}