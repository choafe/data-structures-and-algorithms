/*
5/11/2023
Insertion sorting algorithm
Compare first two objects and swap them if the left is larger than the right
The right sub array will always be sorted (or you can proceed with a left sub array instead)
*/

#include <iostream>
#include <vector>

using namespace std;

void recurInsertion() {

}

void iterInsertion(vector<int>& arr) {

}

void printSorted(vector<int>& arr) {
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

// Driver code for testing and visualizing implementation of code
int main(void) {
    vector<int> arr1 = {5, 1, 6, 2, 4, 3};
    printSorted(arr1);
 
    return 0;
}