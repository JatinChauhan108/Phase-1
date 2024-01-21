// this question is a locked premium leetcode question available in codehelp playlist
// here all the words in the string are separated by a single space only and there are no leading or trailing spaces
// the code has O(n) time complexity and O(1) space complexity

#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s){

    // first we reverse the entire string
    reverse(s.begin(), s.end());

    // then we reverse the individual words in the string to get the desired reversed word string

    int st = 0, e = 0;          // pointers to determine the starting and ending of a particular word
        while(st < s.size()){

            // loop to move the pointer e to the end of a particular word

            while(s[e] != ' ' && e < s.size()){
                e++;
            }
            reverse(s.begin() + st, s.begin() + e);    // reversing the word
            st = (e++) + 1;            // moving pointer st to the start of the next word
        }
        return s;
}