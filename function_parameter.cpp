#include<iostream>
using namespace std;



    

// Function to swap two integers using references
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;
    swap(x, y); // Passing variables by reference
    std::cout << "After swap: x = " << x << ", y = " << y << std::endl;
    




    return 0;
}