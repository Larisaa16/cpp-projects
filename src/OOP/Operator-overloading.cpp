#include <iostream>

using namespace std;

class CVector {
public:
    int x,y;
    CVector() {}
    CVector(int a, int b) : x(a), y(b) {}
};
//supraincarcare operator de adunare
CVector operator+ (const CVector& lhs, const CVector& rhs) {
    CVector temp;
    temp.x=lhs.x+rhs.x;
    temp.y=lhs.y+rhs.y;
    return temp;
}
//supraincarcare operator <<
ostream& operator<<(ostream& os, const CVector& v) {
    os<<v.x<<" "<<v.y;
    return os;
}

int main() {
    CVector foo(3,1);
    CVector bar(1,2);
    CVector result;
    result=foo+bar;
    cout<<result<<endl;
    return 0;
}