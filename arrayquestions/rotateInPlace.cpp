#include <bits/stdc++.h>
using namespace std;

// we will rotate the array in O(1) space complexity
// let's take the array {1,2,3,4} and k = 2

void rotate(vector<int>& nums, int k) {

    k = k % nums.size();

    reverse(nums.begin(), nums.end());              // reverse the entire array
                                                    // {4,3,2,1}

    reverse(nums.begin(), nums.begin() + k);        // reverse the array till k places
                                                    // {3,4,2,1}

    reverse(nums.begin() + k, nums.end());          // reverse the array from (k+1)th place till end
                                                    // {3,4,1,2} -> rotated array
}                                                                       