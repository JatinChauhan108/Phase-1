#include <iostream>
using namespace std;

double sqrtDecimal(int n){
    double ans;
    double s = 0, e = n, mid = (s+e)/2;
    while(s<e){
        double square = mid*mid;
        if(square == n){
            return mid;
        }
        else if(square < n){
            ans = mid;
            s = mid + 0.0000001;
        }
        else{
            e = mid - 0.0000001;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    int n;
    cout << "Enter the number : " ;
    cin >> n;
    cout << "Square root upto 7 decimal points is : " << sqrtDecimal(n) ;
}