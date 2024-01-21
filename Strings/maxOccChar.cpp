// this question is taken from gfg practice set
// all the characters assumed in the string are lowercase

#include <bits/stdc++.h>
using namespace std;

// first we store the count of characters present in the string in an array

char getMaxOccuringChar(string str)
    {
        char arr[26] = {0};         // 26 elements represent the count of all the alphabets in the string from a to z ('a' -> 0th index, 'b' -> 1st index, 'c' -> 2......'z' -> 25)

        for(int i = 0 ; i < str.size(); i++){
            int char_index = str[i] - 'a';      // converting the character found in the string to its index equivalent in the array
            arr[char_index] ++;                 // updating the count of that character in the array
        }
        
        // finding the maximum count in the array

        int max = -1;
        char ans;

        for(int i = 0; i < 26; i ++){
            if(arr[i] > max){
                max = arr[i];
                ans = 'a' + i;               // converting the index to the alphabet it represents
            }
        }
        return ans;
    }