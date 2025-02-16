#include <iostream>
#include <string.h>

using namespace std;

class User {
private:
    char* nume;
    char* parola;
    int an_nastere{};

public:

    User(){
        nume=new char[1];
        nume[0]='\0';
        parola =new char[1];
        parola[0]='\0';
        int an_nastere=0;
    }
    User(char* nume, char* parola, int an_nas) {
        this->nume=new char[strlen(nume)+1];
        strcpy(this->nume, nume);

        this->parola=new char[strlen(parola)+1];
        strcpy(this->parola,parola);

        this->an_nastere=an_nas;
    }

    ~User() {
        delete[] nume;
        delete[] parola;
    }

    void print() {
        cout<<"nume: "<<nume<<endl;
        cout<<"an_nastere: "<<an_nastere<<endl;
    }

   bool verificare_parola() const{
        if (strlen(parola)<8) {
             return false;
        }

        for (int i=0;parola[i]!='\0';i++) {
            if (isdigit(parola[i])) {
                return true;
            }
        }
        return false;
    }

    int getAn() {return an_nastere;}
    void setAn(int an) {an_nastere=an;}

    int varsta() const;

};

int User::varsta() const {
    time_t t = time(0);
    tm* now=localtime(&t);
    int anCurent=now->tm_year+1900;
    return anCurent-an_nastere;
}

int main() {
    User u1("Larisa", "parola123", 2005); u1.print();

    if (u1.verificare_parola()) {
        cout<<"Parola valida"<<endl;
    }
    else {
        cout<<"Parola invalida"<<endl;
    }

    cout<<"Varsta utilizatorului "<<u1.varsta()<<" ani"<<endl;

    return 0;

}