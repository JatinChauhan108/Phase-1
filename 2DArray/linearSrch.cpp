#include <bits/stdc++.h>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
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

    cout << "Enter the element to be found : ";
    int target;
    cin >> target;

    if(isPresent(arr, target, 3, 4)){
        cout << "Element is present.";
    }
    else{
        cout << "Element not present.";
    }
}