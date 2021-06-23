#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int s1, s2, s3, s4, s5, s6, s7, s8;
  cin >> s1 >> s2 >> s3 >> s4 >> s5 >> s6 >> s7 >> s8;

  cout << max(s1 + s2 + s3 + s4, s5 + s6 + s7 + s8) << endl;
  return 0;
}