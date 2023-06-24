#include<bits/stdc++.h>
using namespace std;
int findMaxInBitonicArray(vector<int>& nums) {
    int left = 0, right = nums.size() - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]) {
            return nums[mid];
        } else if (nums[mid] > nums[mid-1] && nums[mid] < nums[mid+1]) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; 
}