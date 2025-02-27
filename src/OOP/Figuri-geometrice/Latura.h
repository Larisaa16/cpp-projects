

#ifndef LATURA_H
#define LATURA_H



#include <iostream>

using namespace std;

class Latura {
private:
    int lungime;
public:
    Latura();
    explicit Latura(int);

    int getL() const;

    Latura& operator=(const Latura&);
    friend istream& operator>>(istream&,Latura&);
    friend ostream& operator<<(ostream&,const Latura&);

};


#endif //LATURA_H
