#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {64, 25, 12, 22, 11,43,3,2};
    int n = 8;
    // Selection sort
    for(int i = 0; i < (n-1); i++){
        int minPos = i;                             // assuming minm element to be at ith pos
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[minPos]){
                minPos = j;
            }
        }
        swap(arr[i],arr[minPos]);
    }
    cout << "Sorted array is : " << endl;
    for(int i = 0; i<n; i++){
        cout << arr[i] << " " ;
    }
}