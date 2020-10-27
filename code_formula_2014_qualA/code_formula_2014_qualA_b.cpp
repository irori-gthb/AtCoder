#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int a, b;
  cin >> a >> b;

  vector<char> pin(10, 'x');
  rep(i, a) {
    int p;
    cin >> p;
    pin[p] = '.';
  }
  rep(i, b) {
    int q;
    cin >> q;
    pin[q] = 'o';
  }

  cout << "" << pin[7] << " " << pin[8] << " " << pin[9] << " " << pin[0]
       << endl;
  cout << " " << pin[4] << " " << pin[5] << " " << pin[6] << endl;
  cout << "  " << pin[2] << " " << pin[3] << endl;
  cout << "   " << pin[1] << endl;
  return 0;
}