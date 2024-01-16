#include <iostream>
using namespace std;

int main(){
    
    char str[20];

    cout << "Enter the string : ";
    cin >> str;

    // 'i' 0th index ko point karega aur j ko us index par point karayenge jaha last character hai string ka

    int i = 0, j = 0;

    // this loop finds the index of null character
    
    while(str[j] != '\0'){
        j++;
    }
    j--;                // last character ka index null character ke index se ek kam hoga

    // fir normal reverse karne ke liye loop similar to that in integer arrays

    while(i<j){
        swap(str[i++], str[j--]);
    }

    cout << "Reversed String is : " << str << endl;
}