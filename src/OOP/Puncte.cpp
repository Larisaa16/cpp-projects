#include <cmath>
#include <iostream>

using namespace std;

class Puncte {
private:
    int x;
    int y;

public:
    Puncte() : x(0), y(0) {}

    Puncte(int x, int y): x(x),y(y) {}

    Puncte(const Puncte& other) {
        x=other.x;
        y=other.y;
    }

   // ~Puncte() {}

    void print() const {
        cout<<"Coordonatele: ("<<x<<", "<<y<<")"<<endl;
    }

    int getX() const {return x;}
    int getY() const {return y;}

    void getXY(int& outX,int& outY) const {
        outX=x;
        outY=y;
    }

    void setXY(int newX, int newY) {
        x=newX;
        y=newY;
    }

    double dist1(Puncte& p) const{
     return sqrt(((x-p.x)*(x-p.x))+((y-p.y)*(y-p.y)));
    }

    static double dist2(const Puncte& p1, const Puncte& p2) {
        return  sqrt(((p1.x-p2.x)*(p1.x-p2.x))+((p1.y-p2.y)*(p1.y-p2.y)));
    }

    bool peDreapta(double a, double b) const {
        return(a*x+b==y);
    }
};

int main() {
    Puncte p1(3,4);
    Puncte p2(7,1);

    cout<<"Punctul 1: "; p1.print();
    cout<<"Punctul 2: "; p2.print();

    cout<<"Distanta dintre coordonate: "<<p1.dist1(p2)<<endl;
    cout<<"Distanta dintre coordonate "<<Puncte::dist2(p1,p2)<<endl;

    double a=2, b=1;
    if (p1.peDreapta(a,b)) {
        cout<<"Punctul se afla pe dreapta y= "<<a<<"x+ "<<b<<endl;
    }
    else {
                cout<<"Punctul nu se afla pe dreapta y= "<<a<<"x+ "<<b<<endl;

    }
    return 0;
}