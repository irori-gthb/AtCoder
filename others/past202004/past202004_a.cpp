#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int floor(string s) {
  if (s[0] == 'B')
    return -(s[1] - '0');
  else
    return s[0] - '0' - 1;
}

int main() {
  string s, t;
  cin >> s >> t;

  int a = floor(s);
  int b = floor(t);
  cout << abs(b - a) << endl;
  return 0;
}