/*
5/18/2023
Bubble sort algorithm
Swaps adjacent elements if they are in the wrong order
Pretty bad for large datasets considering its time complexity
Logic:
1. expected number of checks
2. for each check, parse array this number of times to go through the unsorted array
3. swap values that are not in order
4. largest in unsorted is placed in order in sorted right subarray
*/

#include "sorting.hpp"

#include <iostream>
#include <vector>

using namespace std;

// 5-18 Bubble sort
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