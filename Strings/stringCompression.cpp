// q443. leetcode 

#include <bits/stdc++.h>
using namespace std;

int compress(vector<char>& chars){
    int i = 0;
    int ansindex = 0;               // keeps the ending index of the modified char array
    int count;
    
    // iterating through the array

    while(i < chars.size()){
        int j = i + 1;

        // loop to count the occurrences of the current character

        while(j < chars.size() && chars[j] == chars[i]){
            j++;
        }

        chars[ansindex ++] = chars[i];      // entering the character into the modified array in-place
            
        count = j - i;                      // no. of occurrences of the current character

        // loop to insert the count of occurrence of the current character

        if(count > 1){
            string cnt = to_string(count);          // string that keeps the character equivalent of the count of occurrence of the current character
            for(char ch : cnt){
                chars[ansindex ++] = ch;
            }
        }
        i = j;                              // moving i to the next distinct character
    }
    return ansindex ;                       // ansindex stores the size of the modified char array at the end of the loop
}