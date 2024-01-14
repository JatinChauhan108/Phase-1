#include<bits/stdc++.h>
using namespace std;

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {

	vector<int> ans;
	
	int carry = 0;

	while((n>0) && (m>0)){
		int sum = a[n-1] + b[m-1] + carry;
		if(sum >= 10){
			sum = sum % 10;     // extracting the units place digit for the sum
			carry = 1;          // carry can't be greater than 1
		}
		else{
			carry = 0;
		}
		ans.insert(ans.begin(), sum);   // inserting the sum in the beginning of the vector
		n--; m--;
	}

    // if first array has more digits than second

    while (n > 0) {
        int sum = a[n - 1] + carry;
		if(sum >= 10){
			sum = sum % 10;
			carry = 1;
		}
		else{
			carry = 0;
		}
		ans.insert(ans.begin(), sum);
		n--;
    }

    // if second array has more digits than first

	while (m > 0) {
        int sum = b[m - 1] + carry;
		if(sum >= 10){
			sum = sum % 10;
			carry = 1;
		}
		else{
			carry = 0;
		}
		ans.insert(ans.begin(), sum);
		m--;
    }

    // in case carry = 1 , we need to add an extra '1' as an element in the vector

	if(carry == 1){
		ans.insert(ans.begin(),1);
	}
	return ans;
}