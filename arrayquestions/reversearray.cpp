#include <bits/stdc++.h>
using namespace std; 

void reverseArray(vector<int> arr){
    int s = 0;                                                          
    int e = arr.size() - 1;
    
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
