//q 64 leetcode

#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {

    // we will work on the linear form of a 2D matrix and access the elements of 2D matrix through the indexes of the linear form only
    
    int m = matrix.size();              // row size
    int n = matrix[0].size();           // column size

    int s = 0;
    int e = m*n - 1;

    while(s <= e){

        int mid = s + (e-s)/2;

        // (mid/n) gives the corresponding row in which the targeted element exists
        // (mid % n) gives the corresponding column in which the targeted element exists

        if(matrix[mid / n][mid % n] == target){
            return true;
        }
        else if(target < matrix[mid / n][mid % n]){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return false;
}