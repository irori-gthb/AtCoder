#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string s;
  cin >> s;

  ll sum = 0;
  for (int i = 0; i < 13; i += 2) sum += s[i] - '0';
  sum *= 3;
  for (int i = 0; i < 13; i += 2) sum += s[i + 1] - '0';

  if (sum % 10 == s[14] - '0')
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}