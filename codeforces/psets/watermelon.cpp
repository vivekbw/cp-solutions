// https://codeforces.com/contest/4/problem/A

#include <iostream>

using namespace std;

int main() {
  int w = 0;
  cin >> w;
  if (w == 1 || w == 2) {
    cout << "NO" << endl;
    return 0;
  }

  int rem = w % 2;
  int width = w - rem;
  cout << ((rem != 1) ? "YES" : "NO") << endl;

  return 0;
}
