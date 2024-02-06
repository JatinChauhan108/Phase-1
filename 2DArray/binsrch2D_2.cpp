// q 240 leetcode

#include <bits/stdc++.h>
using namespace std;

// time complexity - O(m + n)
// space complexity - O(1)

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m = matrix.size();
    int n = matrix[0].size();

    // we will start with the last element of first row and do the comparisons with the target element

    int row = 0;
    int col = n - 1;

    while(row < m && col >=0){
        if(matrix[row][col] == target){
            return true;
        }
        else if(target > matrix[row][col]){
            row ++;
        }
        else{
            col --;
        }
    }
    return false;
}