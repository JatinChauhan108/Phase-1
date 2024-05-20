#include <bits/stdc++.h>
using namespace std;

int main(){

    //We will create a jagged array of m no. of rows and create a sizes array to keep track of no. of columns in each row

    int m;
    cout << "Enter the no. of rows : ";
    cin >> m;

    //Creation of jagged array

    int ** arr = new int* [m];
    int * sizes = new int[m];

    for(int i = 0; i < m; i++){
        int n;
        cout << "Enter the size of " << (i+1) << "row : ";
        cin >> n;

        sizes[i] = n;
        arr[i] = new int [n];

    }

    //Taking input from user

    cout << endl << "Enter the elements : " << endl;
    for(int i = 0; i < m; i ++){
        for(int j = 0; j < sizes[i]; j++){
            cin >> arr[i][j];
        }
    }

    //Printing the array

    cout << endl << "The given array is : " << endl;
    for(int i = 0; i < m; i ++){
        for(int j = 0; j < sizes[i]; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //Releasing memory
    
    for(int i = 0; i < m; i++){
        delete []arr[i];
    }
    delete arr;

}