#include <iostream>

using namespace std;

template <typename Type1, typename Type2>
class Pair {
public:
    Type1 first;
    Type2 second;

    Pair(Type1 first, Type2 second) : first(first), second(second) {}

    Pair<Type1, Type2> operator+(const Pair<Type1, Type2>& other) const {
        return Pair<Type1, Type2>(first + other.first, second + other.second);
    }

    bool operator>(const Pair<Type1, Type2>& other) const {
        return (first > other.first && second > other.second);
    }
};

int main() {
    Pair<double, int> p1(3.5, 14);
    Pair<double, int> p2(2.1, 7);
    cout << "p1: " << p1.first << ", " << p1.second << endl;
    cout << "p2: " << p2.first << ", " << p2.second << endl;

    if (p1 > p2)
        cout << "p1 is bigger" << endl;
    else
        cout << "p2 is bigger" << endl;

    auto sum = p1 + p2;
    cout << "Sum: " << sum.first << ", " << sum.second << endl;
}
