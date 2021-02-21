#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  map<int, vector<int>> mp;
  mp[0] = {0, 0, 0, 0};
  mp[1] = {1, 1, 1, 1};
  mp[2] = {2, 4, 8, 6};
  mp[3] = {3, 9, 7, 1};
  mp[4] = {4, 6, 4, 6};
  mp[5] = {5, 5, 5, 5};
  mp[6] = {6, 6, 6, 6};
  mp[7] = {7, 9, 3, 1};
  mp[8] = {8, 4, 2, 6};
  mp[9] = {9, 1, 9, 1};

  if (B % 4 == 0 || (B % 2 == 0 && C >= 2)) {
    cout << mp[A % 10][3] << endl;
  } else if (B % 2 == 0) {
    cout << mp[A % 10][1] << endl;
  } else {
    if (B % 4 == 1) {
      cout << mp[A % 10][0] << endl;
    } else {
      if (C % 2 == 0)
        cout << mp[A % 10][0] << endl;
      else
        cout << mp[A % 10][2] << endl;
    }
  }
  return 0;
}