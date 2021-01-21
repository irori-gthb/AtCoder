#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  string S;
  cin >> N >> S;

  string T;
  for (char c : S) {
    T.erase(remove(T.begin(), T.end(), c), T.end());
    T += c;
  }
  cout << T << endl;
  return 0;
}