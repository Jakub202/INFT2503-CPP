#include <iostream>
using namespace std;

int main() {
  int i = 3;
  int j = 5;
  int *p = &i;
  int *q = &j;

  cout << "Address of i: " << &i << " Value: " << i << endl;
  cout << "Address of j: " << &j << " Value: " << j << endl;
  cout << "Address of p: " << &p << " Value: " << *p << endl;
  cout << "Address of q: " << &q << " Value: " << *q << endl;

  *p = 7;
  *q += 4;
  *q = *p + 1;
  p = q;

  cout << "New values: " << *p << " " << *q << endl;

  return 0;
}
