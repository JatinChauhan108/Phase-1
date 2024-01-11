#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v1(5,2);
    v1.push_back(4);
    cout << "size of v1 " << v1.size() << endl;
    cout << "capacity of v1 " << v1.capacity() << endl;

    vector<int> v2(6);

    v2 = v1;
    cout << "size of v2 " << v2.size() << endl;
    cout << "capacity of v2 " << v2.capacity() << endl;

}