#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  int cj = 0, ci = 0;
  rep(i, S.size() - 2) {
    if (S[i] == 'J' && S[i + 1] == 'O' && S[i + 2] == 'I') cj++;
    if (S[i] == 'I' && S[i + 1] == 'O' && S[i + 2] == 'I') ci++;
  }

  cout << cj << endl;
  cout << ci << endl;
  return 0;
}