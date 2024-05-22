#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[11] = {8,9,10,11,1,2,3,4,5,6,7};
    int s = 0, e = 10, mid = (s+e)/2;
    while(true){
        if(arr[mid] < arr[mid - 1]){
            cout << "Pivot index is " << mid;
            break;
        }

        else if(arr[mid] > arr[10]){
            s = mid + 1;
        }

        else{
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
}
