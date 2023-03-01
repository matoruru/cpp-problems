#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> x(N), y(N), ord(N);
  for (int i = 0; i < N; i++) {
    cin >> x.at(i) >> y.at(i);
    ord.at(i) = i;
  }

  double total = 0.0;
  int count = 0;
  do {
    for (int i = 0; i < N - 1; i++) {
      int dx = x.at(ord.at(i)) - x.at(ord.at(i + 1));
      int dy = y.at(ord.at(i)) - y.at(ord.at(i + 1));
      total += sqrt(dx * dx + dy * dy);
    }
    count++;
  } while (next_permutation(ord.begin(), ord.end()));

  cout << setprecision(10) << total / count << endl;

  return 0;
}
