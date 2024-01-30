#include <bits/stdc++.h>
using namespace std;

class Solution {

public:
    bool checkInclusion(string s1, string s2) {

        vector<int> count(26,0);

        // storing the count of alphabets present in s1 string

        for(auto i : s1){
            int index = i - 'a';
            count[index] ++;
        }

        // creating the first window having size same as s1 string

        int i = 0;
        int windowSize = s1.size();
        vector<int> temp(26,0);

        while(i < windowSize && i < s2.size()){             // the condition "i < s2.size()" ensures that there isn't overflow when i becomes greater than s2.size()
            int index = s2[i] - 'a';
            temp[index] ++;
            i++;
        }

        // checking whether the window is a permutation of s1 string

        if (temp == count){
            return true;
        }

        // creating further windows by appending the count of next element and decreasing the count of preceding element

        while(i < s2.size()){
            char newchar = s2[i];
            int index = newchar - 'a';
            temp[index] ++;

            char oldchar = s2[i - windowSize];
            index = oldchar - 'a';
            temp[index] --;

            if(temp == count){
                return true;
            }
            i++;
        }
        return false;
    }
};