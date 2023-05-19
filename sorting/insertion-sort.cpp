/*
5/18/2023
Insertion sorting algorithm
Compare first two objects and swap them if the left is larger than the right
The right sub array will always be sorted (or you can proceed with a left sub array instead)
*/

#include <iostream>
#include <vector>

using namespace std;

void printSorted(vector<int>& arr) {
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

void insertionSort(vector<int>& arr) {

}

// Driver code for testing and visualizing implementation of code
int main(void) {
    vector<int> arr = {12, 11, 13, 5, 6};
    insertionSort(arr);
    printSorted(arr);
 
    return 0;
}