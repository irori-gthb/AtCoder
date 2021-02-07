#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;
  vector<string> pos = {"KIHBR",    "AKIHBR",   "KIHABR",   "KIHBAR",
                        "KIHBRA",   "AKIHABR",  "AKIHBAR",  "AKIHBRA",
                        "KIHABAR",  "KIHABRA",  "KIHBARA",  "AKIHABAR",
                        "AKIHABRA", "AKIHBARA", "KIHABARA", "AKIHABARA"};
  rep(i, pos.size()) {
    if (S == pos[i]) {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
  return 0;
}