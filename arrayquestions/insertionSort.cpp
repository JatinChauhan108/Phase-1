#include <bits/stdc++.h>
using namespace std;

void insertionSort(int n, vector<int> &arr) {
    for(int i = 1; i < n; i++){
        int key = arr[i];
        int j = i - 1;
        while(j>=0) {
            if(key < arr[j]){
                //shift
                arr[j + 1] = arr[j];
            }
            else{  // ruk jao
                break;
            }
            j--;
        }
        //place key value
        arr[j+1] = key;
    }
}