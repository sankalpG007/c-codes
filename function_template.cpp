#include <iostream>
using namespace std;

template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Max of 3 and 7: " << max(3, 7) << endl;       // Works with integers
    cout << "Max of 3.5 and 2.1: " << max(3.5, 2.1) << endl; // Works with doubles
    cout << "Max of 'a' and 'z': " << max('a', 'z') << endl; // Works with characters

    return 0;
}
