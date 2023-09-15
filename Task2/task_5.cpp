using namespace std;

int main() {

  double number;
  double *ptr = &number;
  double &ref = number;

  number = 5.0;
  *ptr = 6.0;
  ref = 7.0;

  return 0;
}
