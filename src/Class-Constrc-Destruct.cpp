#include <iostream>

using namespace std;

class Entity {
public:
    float X,Y;

    Entity() {
        cout<<"Created entity"<<endl;
        X=0.0f;
        Y=0.0f;
    }

    Entity(float x, float y) {
        X=x;
        Y=y;
    }

    ~Entity() {
        cout<<"Destroyed entity"<<endl;
    }

   void Print() {
       cout << X<<", "<<Y<< endl;
   }
};

void Function() {
    Entity e;
    e.Print();
}



int main() {

    Function();
}