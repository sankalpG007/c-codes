#include <iostream>
#include <vector>

int main() {
    // Declare a vector of integers
    std::vector<int> numbers;

    // Add elements to the vector
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    // Access elements in the vector
    std::cout << "First element: " << numbers[0] << std::endl;
    std::cout << "Second element: " << numbers[1] << std::endl;
    std::cout << "Third element: " << numbers[2] << std::endl;

    // Iterate through the vector using a range-based for loop
    std::cout << "All elements in the vector: ";
    for(int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Get the size of the vector
    std::cout << "Size of the vector: " << numbers.size() << std::endl;

    // Remove the last element
    numbers.pop_back();

    // Check the size after removing an element
    std::cout << "Size after pop_back: " << numbers.size() << std::endl;

    // Iterate through the vector using an iterator
    std::cout << "Elements after pop_back: ";
    for(std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
