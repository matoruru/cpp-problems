#include <bits/stdc++.h>
using namespace std;

int main() {
  string O, E;
  cin >> O >> E;
  int len = O.size() + E.size();
  string pw = "";
  for (int i = 0; i < len; i++)
    pw.push_back(i % 2 ? E.at(i / 2) : O.at(i / 2));
  cout << pw << endl;
  return 0;
}