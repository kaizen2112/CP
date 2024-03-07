#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

std::map<int, int> storeAndSort(const std::vector<int>& arr) {
    std::map<int, int> freqMap;
    for (int num : arr) {
        freqMap[num]++;
    }
    return freqMap;
}

int main() {
    // Test case 1
    std::vector<int> arr1 = {2, 3, 8, 5, 6, 5};
    std::map<int, int> map1 = storeAndSort(arr1);
    std::cout << "Test Case 1:\n";
    for (const auto& pair : map1) {
        std::cout << pair.first << ": " << pair.second << "\n";
    }

    // Test case 2
    std::vector<int> arr2 = {2, 3, 4, 5, 6, 5};
    std::map<int, int> map2 = storeAndSort(arr2);
    std::cout << "\nTest Case 2:\n";
    for (const auto& pair : map2) {
        std::cout << pair.first << ": " << pair.second << "\n";
    }

    return 0;
}
