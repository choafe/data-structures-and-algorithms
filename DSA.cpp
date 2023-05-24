#include <vector>
#include <iostream>

#include "DSA.hpp"

using namespace std;    

int main() {
    // Sorting Algorithms
    vector<int> arr1 = {6, 3, 0, 5};
    bubbleSort(arr1);
    cout << "Sorted Array: " << endl;
    printSorted(arr1);

    vector<int> arr2 = {12, 11, 13, 5, 6};
    insertionSort(arr2);
    printSorted(arr2);

    vector<int> arr3 = {64, 25, 12, 22, 11};
    sortedSquares(arr3);
    cout << "Sorted Array: " << endl;
    printSorted(arr3);

    vector<int> arr4 = {64, 25, 12, 22, 11};
    selectionSort(arr4);
    cout << "Sorted Array: " << endl;
    printSorted(arr4);

    return 0;
}