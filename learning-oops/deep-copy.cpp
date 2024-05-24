#include <bits/stdc++.h>
using namespace std;

class hero{
    private:
    int health;

    public:
    char * name;
    char level;

    hero(){
        cout << "Simple constructor created" << endl;
        name = new char[100];
    }

    // Copy Constructor
    // Default Constructor dies out

    hero(hero& h){
        this -> health = h.health;
        this -> level = h.level;

        // For copying the name
        // We will create a new memory location for the name of object created
        // And then copy the name of h in that memory location

        this -> name = new char[strlen(h.name) + 1];
        strcpy(this -> name, h.name);
    }

    // Parameterised constructor

    hero(int health, char level){
        this -> health = health;
        this -> level = level;
    }

    int getHealth(){
        return health;
    }

    void setName(char name[]){
        strcpy(this -> name, name);
    }

    void setHealth(int health){
        this -> health = health;
    }

    void setLevel(char level){
        this -> level = level;
    }

    void print(){
        cout << "Name : " << name << endl;
        cout << "Level : " << level << endl;
        cout << "Health : " << health << endl;
    }
};

int main(){
    hero h1;

    char name[10] = "shaktiman";

    h1.setName(name);
    h1.setHealth(40);
    h1.setLevel('A');

    // making copy of h1
    hero h2(h1);

    h2.print();

    // changing the name of the h2

    h2.name[0] = 'c';

    h2.print();

    // h1 remains as it is
    // This is an example of a deep copy
    h1.print();

    return 0;
}