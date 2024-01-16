#include <bits/stdc++.h>
using namespace std;

int main(){
    char str[20];
    cout << "Enter the string : ";
    cin >> str;

    int i = 0;
    while(str[i] != '\0'){             // jab i null character par pahuch jaye tab uski value hi string ki length hogi
        i++;
    }
    
    cout << "Length of given string is : " << i << endl;
}
