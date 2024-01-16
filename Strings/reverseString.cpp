#include <iostream>
using namespace std;

int main(){
    
    char str[20];

    cout << "Enter the string : ";
    cin >> str;

    int i = 0, j = 0;
    while(str[j] != '\0'){
        j++;
    }
    j--;

    while(i<j){
        swap(str[i], str[j]);
        i++; j--;
    }

    cout << "Reversed String is : " << str << endl;
}