#include <bits/stdc++.h>
using namespace std;

class hero{
    private:
    int health;

    public:
    char level;

    /*

    User-defined constructor 
    Default constructor dies out
    hero(){
        cout << "Constructor Created" << endl;
    }

    */

   // Parameterised constructor
   // Default constructor dies out

   hero(int health){
    cout << "Address in this : " << this << endl;
    this -> health = health;
   }

   // Getter
   int getHealth(){
    return health;
   }


};

int main() {

    /* 
    
    Since we have created a parameterised constructor the default constructor
    which was non parameterised dies out and hence when we try to create an object
    without giving any parameters, problem occurs

    */

    // Uncomment to see the error

    // hero rajesh;
    
    // Object created statically
    hero ramesh(50);
    cout << "Address of ramesh : " << &ramesh << endl;

    // Dynamically
    hero * suresh = new hero(20);
    cout << "Health of suresh is : " << suresh -> getHealth() << endl;
}