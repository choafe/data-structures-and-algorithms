#include <vector>
#include <iostream>

#include "sorting/sorting.hpp"

using namespace std;

int main() {
    // Sorting Algorithms
    vector<int> arr = {6, 3, 0, 5};
    bubbleSort(arr);
    cout << "Sorted Array: " << endl;
    printSorted(arr);

    vector<int> arr = {12, 11, 13, 5, 6};
    insertionSort(arr);
    printSorted(arr);

    vector<int> arr = {64, 25, 12, 22, 11};
    sortedSquares(arr);
    cout << "Sorted Array: " << endl;
    printSorted(arr);

    vector<int> arr = {64, 25, 12, 22, 11};
    selectionSort(arr);
    cout << "Sorted Array: " << endl;
    printSorted(arr);



    return 0;
}
