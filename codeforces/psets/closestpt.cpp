// https://codeforces.com/contest/2004/problem/A

#include <iostream>
#include <cmath>
#include <vector>

#include <algorithm> // Optional, useful for debugging or sorting
#define LOG_VEC(v) for (auto x : v) cout << x << " "; cout << endl;

using namespace std;

int main() {
  int t = 0;
  cin >> t;
  while(t--) {
    int n = 0;
    cin >> n;
    vector<int> ints(n);
    for(int i = 0; i < n; i++) {
      cin >> ints[i];
    }
    cout << (((n == 2) && (abs(ints[0] - ints[1]) >= 2)) ? "YES" : "NO") << endl;
  }

  return 0;
}
