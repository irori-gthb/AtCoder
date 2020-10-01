#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  double Height, BMI;
  cin >> Height >> BMI;

  cout << setprecision(10) << BMI * pow(Height / 100, 2) << endl;
  return 0;
}