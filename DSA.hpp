#include <vector>
#include <iostream>

using namespace std;

void printSorted(vector<int>& arr) {
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

vector<int> sortedSquares(vector<int>& nums);

vector<int> selectionSort(vector<int>& nums);

vector<int> bubbleSort(vector<int>& nums);

vector<int> insertionSort(vector<int>& arr);