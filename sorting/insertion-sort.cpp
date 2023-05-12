/*
5/11/2023
Insertion sorting algorithm
Compare first two objects and swap them if the left is larger than the right
The right sub array will always be sorted (or you can proceed with a left sub array instead)

Example
Input: 5 1 6 2 4 3
Output: 1 2 3 4 5 6
*/

#include <iostream>

using namespace std;

void recurInsertion() {

}

void iterInsertion() {

}

void printSorted(int* arr, int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }
}

int main(void) {
    int arr1[6] = {5, 1, 6, 2, 4, 3};
    int arr2[6] = {5, 1, 6, 2, 4, 3};

    printSorted(arr1, 6);
    printSorted(arr2, 6);
 
    return 0;
}