#include <iostream>
//supraincarcarea metodelor
using namespace std;

class Database {
public:
    void insert(const char* nume) {
        cout<<"Nume inserat: "<<nume<<endl;
    }

    void insert(const char* nume, const char* prenume) {
        cout<<"Nume si prenume inserate: "<<nume<<" "<<prenume<<endl;
    }

    void insert(const char* nume, const char* prenume, int varsta) {
        cout<<"Nume, prenume si varsta inserate: "<<nume<<" "<<prenume<<", "<<varsta<<endl;
    }
};

int main() {

    Database db;

    const char* nume="Plath";
    const char* prenume="Sylvia";
    int varsta=18;

    db.insert(nume);
    db.insert(nume,prenume);
    db.insert(nume,prenume, varsta);

    return 0;

}