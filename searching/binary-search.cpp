/*
5/16/2023
Binary search
*/

#include <vector>

using namespace std;

// Iterative binary search
int iterSearch(vector<int>& nums, int target) 
{
    int l = 0, h = nums.size()-1;
    while(l <= h) 
    {
        int m = (h+l)/2;
        if(target == nums[m])
            return m;
        if(target > nums[m])
            l = m+1;
        if(target < nums[m])
            h = m-1;
    }
    return -1;
}

// Recursive binary search
int binarySearch(vector<int> &nums, int l, int h, int target) {
        int m = (h+l)/2;
        if(target == nums[m])
            return m;
        if(l > h)
            return -1;

        if(target > nums[m])
            return binarySearch(nums, m+1, h, target);
        else
            return binarySearch(nums, l, m-1, target);
    }

int recurSearch(vector<int>& nums, int target) 
{
    int l = 0, h = nums.size()-1, m = (h+l)/2;
    return binarySearch(nums, l, h, target);
}

// 5-17 Binary Search calls for determining the first bad number
class Bad_Solution {
private:
    bool isBadVersion(int version);
public:
    int firstBadVersion(int n) {
        long l = 1, h = n;
        while(l <= h) {
            long m = (h+l)/2;
            bool prev = (h == 1) ? 0 : isBadVersion((int)m-1);

            if(isBadVersion((int)m) && !prev)
                return (int)m;

            if(isBadVersion((int)m) && prev)
                h = m-1;
            else
                l = m+1; 
        }
        return 0;
    }
};