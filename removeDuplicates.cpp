// q 1047 leetcode

#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string s) {

    string ans;

    for(int i = 0; i < s.size(); i++){

        // in first iteration first element of s string would be stored in ans string
        // in subsequent iterations if the accessed character from s is equal to the last pushed character in ans, then that last pushed character is popped from ans
        // the condition ans.size() > 0 ensures pop operation is not carried out when length of ans string becomes zero

        if((ans.size() > 0) && (ans[ans.size() - 1] == s[i])){
            ans.pop_back();
        }
        else{
            ans.push_back(s[i]);
        }
    }
    return ans;
}