#include <iostream>

using namespace std;

class Entity {
public:
    float X,Y;

    void Move(float xa, float ya) {
        X+=xa;
        Y+=ya;
    }
};

class Player: public Entity{
    public:
    const char* Name;

    void PrintName() {
        cout<<"Player Name: "<<Name<<endl;
    }
};

int main() {

    cout<<sizeof(Entity)<<endl;
    Player p{};;
    p.Move(5,5);
    p.X=4;

}