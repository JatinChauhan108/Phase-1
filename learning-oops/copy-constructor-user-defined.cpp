#include <bits/stdc++.h>
using namespace std;

class hero{
    private:
    int health;

    public:
    char level;

    hero(){
        cout << "Simple constructor created" << endl;
    }

    // Parameterised constructor

    hero(int health){
        this -> health = health;
    }

    // User-defined Copy constructor
    // Default copy constructor dies out 
    
    hero(hero& temp){
        this -> health = temp.health;
        this -> level = temp.level;
    }

    int getHealth(){
        return health;
    }
};

int main(){
    hero suresh(50);

    suresh.level = 'A';

    // Copy constructor used

    hero ramesh(suresh);

    cout << "health is : " << ramesh.getHealth() << endl;
    cout << "level is : " << ramesh.level << endl;

}