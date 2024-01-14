#include <bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> v1, int n, vector<int> v2, int m){
    vector<int> merged;

    int i = 0, j = 0;       // Creating two pointers

    // Pushing elements in sorted order
    while((i<n) && (j<m)){
        if(v1[i] < v2[j]){
            merged.push_back(v1[i++]);  
        }
        else{
            merged.push_back(v2[j++]);
        }
    }

    //Copying remaining elements
    while(i<n){
        merged.push_back(v1[i]);
        i++;
    }
    while(j<m){
        merged.push_back(v2[j]);
        j++;
    }
    return merged;   
}