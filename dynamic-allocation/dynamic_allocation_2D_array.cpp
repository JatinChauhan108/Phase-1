#include <bits/stdc++.h>
using namespace std;

int main(){

    //We will create 2D array of size row X col

    int row, col;
    cout << "Enter the no. of rows and columns : ";
    cin >> row >> col;

    //Creation of array

    int** arr = new int* [row];

    for(int i = 0; i < row; i++){
        arr[i] = new int [col];
    }

    //Taking input from user
    cout << endl <<  "Enter array elements : " << endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> arr[i][j];
        }
    }

    //Printing the array
    cout << endl << "The array is : " << endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //Releasing memory 
    for(int i = 0; i < row; i++){
        delete [] arr[i];
    }
    delete [] arr;
}