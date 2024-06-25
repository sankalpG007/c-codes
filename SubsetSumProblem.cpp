#include <iostream>
#include <vector>

using namespace std;

// Function to print a subset
void printSubset(const vector<int>& subset) {
    for (int num : subset) {
        cout << num << " ";
    }
    cout << endl;
}

// Recursive function to find subsets with a given sum
void findSubsets(vector<int>& nums, int index, vector<int>& currentSubset, int targetSum, int currentSum) {
    // If the current sum is equal to the target sum, print the current subset
    if (currentSum == targetSum) {
        printSubset(currentSubset);
        return;
    }
    
    // If the index is out of bounds or current sum exceeds target sum, return
    if (index >= nums.size() || currentSum > targetSum) {
        return;
    }

    // Include the current element in the subset
    currentSubset.push_back(nums[index]);
    findSubsets(nums, index + 1, currentSubset, targetSum, currentSum + nums[index]);

    // Exclude the current element from the subset (backtrack)
    currentSubset.pop_back();
    findSubsets(nums, index + 1, currentSubset, targetSum, currentSum);
}

int main() {
    vector<int> nums;
    int n, targetSum;

    // Input the number of elements in the set
    cout << "Enter the number of elements in the set: ";
    cin >> n;

    // Input the elements of the set
    cout << "Enter the elements of the set: ";
    for (int i = 0; i < n; ++i) {
        int element;
        cin >> element;
        nums.push_back(element);
    }

    // Input the target sum
    cout << "Enter the target sum: ";
    cin >> targetSum;

    vector<int> currentSubset;
    cout << "Subsets with sum " << targetSum << " are:" << endl;
    findSubsets(nums, 0, currentSubset, targetSum, 0);

    return 0;
}
