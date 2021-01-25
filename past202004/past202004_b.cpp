#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  int a = count(S.begin(), S.end(), 'a');
  int b = count(S.begin(), S.end(), 'b');
  int c = count(S.begin(), S.end(), 'c');

  if (a > b && a > c)
    cout << "a" << endl;
  else if (b > a && b > c)
    cout << "b" << endl;
  else
    cout << "c" << endl;
  return 0;
}
