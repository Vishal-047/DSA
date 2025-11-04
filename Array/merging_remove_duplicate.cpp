#include <iostream>
#include <algorithm> // For std::sort and std::unique

int main() {
    int n1, n2;
    std::cin >> n1; // Size of the first array
    int arr1[n1];
    for (int i = 0; i < n1; ++i) {
        std::cin >> arr1[i];
    }

    std::cin >> n2; // Size of the second array
    int arr2[n2];
    for (int i = 0; i < n2; ++i) {
        std::cin >> arr2[i];
    }

    // Merge the arrays into a new array
    int mergedArr[n1 + n2];
    std::copy(arr1, arr1 + n1, mergedArr);
    std::copy(arr2, arr2 + n2, mergedArr + n1);

    // Sort thehe merged array
    std::sort(mergedArr, mergedArr + n1 + n2);

    // Remove duplicates
    auto last = std::unique(mergedArr, mergedArr + n1 + n2);

    // Print the merged array without duplicates
    for (int* it = mergedArr; it != last; ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
