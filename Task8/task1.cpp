#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

template <typename Type>
bool equal(Type a, Type b) {
    cout << "Template:" << endl;
    cout << a << " == " << b << " -> " << (a == b) << endl;
    return a == b;
}

template<>
bool equal(double a, double b) {
    const double err = 1e-5;
    double diff = abs(a - b);
    cout << "double:" << endl;
    cout << setprecision(8) << abs(a - b) << " < " << setprecision(7) << err << " -> " << (diff < err) << endl;
    return diff < err;
}

int main() {
    int i_a = 4, i_b = 5, i_c = 4;
    double d_a = 4.111112, d_b = 4.111118, d_c = 4.111130;
    equal(i_a, i_b); cout << endl;
    equal(i_a, i_c); cout << endl;
    equal(d_a, d_b); cout << endl;
    equal(d_b, d_c); cout << endl;
    equal(d_a, d_c);
}

