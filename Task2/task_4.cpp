using namespace std;

int main() {

  int a = 5;
  int &b = a;  // References must be initialized.
  int *c = &a; // You can't take the address of a reference.
  a = b + *c;  // a is not a pointer.
  b = 2;       // You can't assign to the address of a variable.
  return 0;
}
