#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, B;
  string S;
  cin >> N >> A >> B;
  cin >> S;

  int pc = 0, Bi = 1;
  for (int i = 0; i < N; i++) {
    char si = S.at(i);
    switch (si) {
      case 'c':
        cout << "No" << endl;
        break;
      case 'a':
        if (pc < A + B) {
          cout << "Yes" << endl;
          pc++;
        } else {
          cout << "No" << endl;
        }
        break;
      case 'b':
        if (pc < A + B && Bi <= B) {
          cout << "Yes" << endl;
          pc++; Bi++;
        } else {
          cout << "No" << endl;
        }
        break;
    }
  }

  return 0;
}