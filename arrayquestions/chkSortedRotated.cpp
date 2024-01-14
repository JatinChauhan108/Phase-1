#include <bits/stdc++.h>
using namespace std;

// in a sorted rotated array, the no. of times an element is greater than its succeeding element is only one

bool check(vector<int>& nums) {
        int count = 0;                                       // count represents the no. of times arr[i] > arr[i+1] i.e. deviates from ascending order 

        for (int i = 0; i < nums.size() - 1; i++){
            if(nums[i] > nums[i+1]){
                count ++;
            }
        }
        if(nums[nums.size() - 1] > nums[0]){
            count ++;
        }
        return count <= 1 ;