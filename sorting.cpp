#include "DSA.hpp"

using namespace std;

/*
5/17/2023
Selection sorting algorithm
Select smallest or largest of unsorted array and move it to the sorted array (right half)
Repeat and swap it with the first element of the unsorted portion
Logic:
1. go through the array looking for the largest, put last (now right array is sorted)
2. switch with the last element of the unsorted array
3. repeat with finding the largest and switching them around

Bidirectional selection sort
Switch between the smallest and largest value for sorting (faster)
*/

// 5-18 Squares input vector and sorts by increasing order
vector<int> sortedSquares(vector<int>& nums) {
    for(int i = 0; i < nums.size(); i++) {
        nums[i] = nums[i]*nums[i];
    }
    // Two pointer system for selection sort
    int i = 0, j = nums.size()-1;
    while(i < j) {     
        if(nums[i] > nums[j]) {
            int temp = nums[j];
            nums[j] = nums[i];
            nums[i] = temp;
            printSorted(nums);
        }

        if(i == j-1) {
            i = 0;
            j--;
        } else {
            i++;
        }
    }
    return nums;
}

vector<int> selectionSort(vector<int>& nums) {
    int i = 0, j = nums.size()-1;
    while(i < j) {     
        if(nums[i] > nums[j]) {
            int temp = nums[j];
            nums[j] = nums[i];
            nums[i] = temp;
            printSorted(nums);
        }

        if(i == j-1) {
            i = 0;
            j--;
        } else {
            i++;
        }
    }
    return nums;
}

/*
5/18/2023
Bubble sort algorithm
Swaps adjacent elements if they are in the wrong order
Pretty bad for large datasets considering its time complexity
1. expected number of checks
2. for each check, parse array this number of times to go through the unsorted array
3. swap values that are not in order
4. largest in unsorted is placed in order in sorted right subarray
*/
vector<int> bubbleSort(vector<int>& nums) {
    int n = nums.size()-1;  // number of expected checks
    int i = 0;

    for(int i = n; i >= 0; i--) {
        for(int j = 0; j < n; j++) { // going through the array up to sorted subarray
            if(nums[j] > nums[j+1]) {
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
                printSorted(nums);
            }   
        }   
    }
    return nums;
}

/*
5/18/2023
Insertion sorting algorithm
Compare first two objects and swap them if the left is larger than the right
The right sub array will always be sorted (or you can proceed with a left sub array instead)
*/
vector<int> insertionSort(vector<int>& arr) {
    return arr; // TODO: write function
}

