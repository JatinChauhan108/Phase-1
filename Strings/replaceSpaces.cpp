// question from coding ninjas
// we are using O(n) time and space complexity
// this question can't be done using O(1) space complexity as the no. of spaces in the string would be variable as a result of which variable space is necessarily required

#include <bits/stdc++.h> 
using namespace std;

string replaceSpaces(string &str){

	// creating a string where we would copy the contents of the given string replacing spaces
	string ans;
	
	for(int i = 0; i < str.size(); i++){
		if(str[i] == ' '){
			ans.push_back('@');
            ans.push_back('4');
            ans.push_back('0');
		}
		else{
			ans.push_back(str[i]);
		}
	}
	return ans;
}