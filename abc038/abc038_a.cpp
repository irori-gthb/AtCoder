#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  if (S[S.size() - 1] == 'T')
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}