#include <bits/stdc++.h>
using namespace std;

void printRowSum(int arr[][4], int row, int col){
    int rowsum;
    for(int i = 0; i < row; i++){
        rowsum = 0;
        for(int j = 0; j < col; j++){
            rowsum += arr[i][j];
        }
        cout << "Row " << i+1 << " sum is : " << rowsum << endl;
    }
}

int main(){
    int arr[3][4];

    //input the array
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cin >> arr[i][j];
        }
    }

    //printing the array 
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    printRowSum(arr, 3, 4);
}