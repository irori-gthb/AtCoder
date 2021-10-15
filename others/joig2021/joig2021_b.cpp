#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, K;
  string T;
  cin >> N >> K >> T;

  rep(i, N) {
    if (i >= K - 1) {
      if (islower(T[i]))
        cout << (char)toupper(T[i]);
      else
        cout << (char)tolower(T[i]);
    } else
      cout << T[i];
  }
  cout << endl;
  return 0;
}