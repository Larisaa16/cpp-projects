#include <iostream>
#include <vector>

using namespace std;

class Vertex {
private:
    float x,y,z;

public:
    Vertex(float x, float y, float z):x(x),y(y),z(z) {}
    Vertex(const Vertex& v):x(v.x),y(v.y), z(v.z){
        cout<<"Copied"<<endl;
    }
};

int main() {
    vector<Vertex> v;
    v.reserve(3);
    v.emplace_back(1,2,3);
    v.emplace_back(4,5,6);
    v.emplace_back(7,8,9);

}