#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  char S, T;
  cin >> S >> T;

  if (S == 'Y')
    cout << (char)toupper(T) << endl;
  else
    cout << T << endl;
  return 0;
}