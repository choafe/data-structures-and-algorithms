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
#include <vector>

using namespace std;

void recurInsertion() 
{

}

void iterInsertion(vector<int>& arr) 
{
}

void printSorted(vector<int>& arr) 
{
    for(int i = 0; i < arr.size(); i++) 
    {
        cout << arr[i] << endl;
    }
}

int main(void) 
{
    vector<int> arr1 = {5, 1, 6, 2, 4, 3};
    vector<int> arr2 = {5, 1, 6, 2, 4, 3};

    printSorted(arr1);
    printSorted(arr2);
 
    return 0;
}