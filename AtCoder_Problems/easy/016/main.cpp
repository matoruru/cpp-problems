#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int ANS[N + 1];

  for (int Ai, i = 1; i <= N; i++) {
    cin >> Ai;
    ANS[Ai] = i;
  }

  cout << ANS[1];
  for (int i = 2; i <= N; i++) {
    cout << " " << ANS[i];
  }
  cout << endl;

  return 0;
}