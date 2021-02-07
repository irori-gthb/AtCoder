#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string str;
  vector<string> s;

  while (cin >> str) {
    s.push_back(str);
  }

  int cnt = 1;
  for (string x : s) {
    if (x == "Left")
      cout << "<";
    else if (x == "Right")
      cout << ">";
    else if (x == "AtCoder")
      cout << "A";

    if (cnt != s.size()) cout << " ";
    cnt++;
  }
  cout << endl;
  return 0;
}