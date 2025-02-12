#include <iostream>
#include <string>

using namespace std;

class Printable {
public:
    virtual ~Printable() = default;

    virtual string GetClassName()=0;
};
class Entity: public Printable {
    public:
    ~Entity() override = default;
    virtual string GetName() {return "Entity";}
    string GetClassName() override {return "Entity";};
};

class Player: public Entity {
private:
    string m_Name;

public:
    Player(string  name)
        : m_Name(std::move(name)){}


    string GetName() override {return m_Name;}
    string GetClassName() override {return "Player";};
};

void Print(Printable* obj) {
    cout<<obj->GetClassName()<<endl;
}

void PrintName(Entity* e) {
    cout<<e->GetName()<<endl;
}
int main() {
    Entity* e=new Entity();
    //PrintName(e);
    Player* p=new Player("Larisa");

    Print(e);
    Print(p);

    delete e;
    delete p;
}