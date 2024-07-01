#include <iostream>
using namespace std;

class Print {
public:
    void display(int i) {
        cout << "Displaying int: " << i << endl;
    }

    void display(double d) {
        cout << "Displaying double: " << d << endl;
    }

    void display(string s) {
        cout << "Displaying string: " << s << endl;
    }
};

int main() {
    Print p;
    p.display(5);
    p.display(5.5);
    p.display("Hello World");
    return 0;
}
