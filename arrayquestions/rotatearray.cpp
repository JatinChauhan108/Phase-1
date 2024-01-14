#include <bits/stdc++.h>
using namespace std;

// rotating the array by k shifts all the elements by k places

void rotate(vector<int> &nums, int k){
    vector<int> temp(nums.size());                 // creating a temp vector to place the shifted elements of nums
    for(int i = 0; i < nums.size(); i++){          // iterating through all elements to shift them by k places
        temp[(i+k) % nums.size()] = nums[i];       // %(modulo) operator to reach the correct index if (i+k) >= nums.size()
    }
    nums = temp;                                   // overwriting the original array with rotated array
}