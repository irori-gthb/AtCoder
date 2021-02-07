#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string s, t;
  cin >> s >> t;

  int d = stoi(s + t);
  // sqrt(100100)=316.38
  rep(i, 333) {
    if (i * i == d) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}