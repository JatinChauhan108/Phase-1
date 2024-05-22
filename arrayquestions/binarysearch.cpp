#include <bits/stdc++.h>
using namespace std;

int binsearch(int arr[], int n, int k){
    int s = 0, e = n-1, mid = (s+e)/2;
    while(s<=e){
        if(arr[mid] == k){
            return mid;
        }
        else if (arr[mid] > k){
            e = mid-1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int main(){
    int arr[8] = {1,4,6,7,9,20,21,22};
    cout << "Element 21 found at position : " << binsearch(arr,8,21);
}