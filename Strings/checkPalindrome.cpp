// This program is a variation of the palindrome program
// Question is given in coding ninjas under the name "Check if the string is a palindrome"

#include <bits/stdc++.h>
using namespace std;

char tolowercase(char ch){

    // function to return the lowercase of a character if it is in upper case

    if((ch >= 'a' and ch <= 'z') || (ch >= '0' and ch <= '9')){
        return ch;
    }
    else{
        ch = (ch - 'A') + 'a';            // ASCII values k according ch character ka 'A' se distance nikala fir ch ka lowercase 'a' se utne hi distance pr hoga to 'a' me add kar diya
        return ch;
    }
}

bool checkPalindrome(string s)
{
    int i = 0;
    int j = s.size() - 1;

    while (i < j){

        while(!isalnum(s[i]) && i < j){

            // i ko increment karte jao jab tak character ya letter na mil jaye

            i ++;
        }

        while(!isalnum(s[j]) && i < j){

            // j ko decrement karte jao jab tak character ya letter na mil jaye

            j --;
        }

        if (tolowercase(s[i++]) != tolowercase(s[j--])){
            return false;
        }
    }
    return true;
}