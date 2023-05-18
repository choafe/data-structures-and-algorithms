/*
5/17/2023
Selection sorting algorithm
Select smallest or largest of unsorted array and move it to the sorted array
Repeat and swap it with the first element of the unsorted portion

Bidirectional selection sort
Switch between the smallest and largest value for sorting (faster)
*/

#include <iostream>
#include <vector>

using namespace std;
 
void printSorted(vector<int>& arr) 
{
    for(int i = 0; i < arr.size(); i++) 
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

// 5-18 Squares input vector and sorts by increasing order
vector<int> sortedSquares(vector<int>& nums) 
{
    for(int i = 0; i < nums.size(); i++) 
    {
        nums[i] = nums[i]*nums[i];
    }

    // Two pointer system for selection sort
    int i = 0, j = nums.size()-1;
    while(i < j) 
    {     
        if(nums[i] > nums[j]) 
        {
            int temp = nums[j];
            nums[j] = nums[i];
            nums[i] = temp;
        }

        if(i == j-1)
        {
            i = 0;
            j--;
            printSorted(nums);
        } 
        else 
        {
            i++;
        }
    }
    return nums;
}


// Driver code for testing and visualizing implementation of code
int main(void) 
{
    vector<int> arr = {64, 25, 12, 22, 11};

    sortedSquares(arr);
    cout << "Sorted Array: " << endl;
    printSorted(arr);
 
    return 0;
}