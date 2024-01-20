// TAKEN FROM LEETCODE
// this question is just a variation of checking a palindrome string but here we are first modifying the string to remove non alphanumeric characters and then checking whether it is palindrome or not

#include <bits/stdc++.h>
using namespace std;

class Solution {
private: 

    bool valid(char a){

        // function to check for alphanumeric characters

        if((a >= 'a' and a<='z') || (a >= 'A' and a <= 'Z') || (a >= '0' and a <= '9')){
            return true;
        }
        return false;
    }

    char tolowercase(char ch){

        // function to convert lowercase characters to uppercase

        if((ch >= 'a' and ch <= 'z') || (ch >= '0' and ch <= '9')){
            return ch;
        }
        else{
            char temp = (ch - 'A') + 'a'; 
            return temp;
        }
    }

public:

    bool isPalindrome(string s) {

        // modifying the string using two pointer approach

        int i = 0, j = 0;
        while(j < s.size()){
            if(valid(s[j])){
                s[i++] = tolowercase(s[j++]);
            }
            else{
                j++;
            }
        }

        // i would contain the size of the modified string at the end of the above loop
        // below are the instructions to check whether the modified string is palindrome or not
        
        int st = 0, e = i - 1;
        while(st < e){
            if(s[st++] != s[e--]){
                return false;
            }
        }
        return true;
    }
};