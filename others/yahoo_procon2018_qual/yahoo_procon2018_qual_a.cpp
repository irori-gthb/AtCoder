#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  if (S[0] == 'y' && S[1] == 'a' && S[2] == 'h' && S[3] == S[4])
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}