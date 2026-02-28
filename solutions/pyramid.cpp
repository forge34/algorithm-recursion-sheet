#include <iostream>
#include <string>

using namespace std;

void printPyramid(int n, int max_width) {
  if (n == 0)
    return;

  printPyramid(n - 1, max_width);
  int level = (2 * n) - 1;
  int padding = max_width - level;
  string stars =
      string(padding / 2, ' ') + string(level, '*') + string(padding / 2, ' ');

  cout << stars << endl;
}

int main() {
  int n;

  cin >> n;

  printPyramid(n, (2 * n) - 1);
}
