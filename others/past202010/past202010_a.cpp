#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  map<int, char> mp;
  mp[A] = 'A';
  mp[B] = 'B';
  mp[C] = 'C';

  cout << mp[A + B + C - max({A, B, C}) - min({A, B, C})] << endl;
  return 0;
}