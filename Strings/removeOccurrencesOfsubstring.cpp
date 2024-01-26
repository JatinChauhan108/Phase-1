// question 1910 taken from leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeOccurrences(string s, string part) {

        // str.find(substr) finds the leftmost occurrence of substr in str and returns the starting index of the substr present in str.
        // if the substr is absent in str, it returns highest value of a 32 bit unsigned integer.

        while((s.size() != 0) && (s.find(part) < s.size())){  

            // str.erase(starting index, length of substring to be removed) removes the characters from starting index upto the length specified

            s.erase(s.find(part),part.size());
        }
        return s;
    }
};