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

#include "sorting.hpp"

#include <iostream>
#include <vector>

using namespace std;

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