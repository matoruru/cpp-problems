#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, D, X;
  cin >> N >> D >> X;

  int choco = 0;
  for (int i = 0; i < N; i++) {
    int Ai;
    cin >> Ai;
    for (int j = 0; j < D; j++) {
      if (j * Ai + 1 <= D) 
        choco++;
      else
        break;
    }
  }

  cout << choco + X << endl;

  return 0;
}