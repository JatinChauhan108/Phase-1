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

    int getHealth(){
        return health;
    }
};

int main(){
    hero suresh(50);

    suresh.level = 'A';

    hero ramesh(suresh);

    // ramesh.health = suresh.health
    // ramesh.level = suresh.level

    cout << "health is : " << ramesh.getHealth() << endl;
    cout << "level is : " << ramesh.level << endl;

}