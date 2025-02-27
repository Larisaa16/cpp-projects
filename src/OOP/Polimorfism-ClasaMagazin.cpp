#include <iostream>
#include <string.h>


class Produs {
protected:
    char* nume;
    double pret;
    int stoc;
    char cod[10];
public:
    Produs();
    Produs(const char*, double, int, const char[]);
    Produs(const Produs&);

    virtual ~Produs();
    virtual void Print();
    virtual double Stoc();
    virtual void Eticheta();
    virtual int Garantie();
};

Produs::Produs() {
    nume=nullptr;
    pret=0;
    stoc=0;
    for (char & i : cod) {
        i='\0';
    }
}

Produs::Produs(const char* n, double p,int s, const char c[10]) {
    nume=new char[strlen(n)+1];
    strcpy(nume,n);

    pret=p;
    stoc=s;
    strcpy(cod,c);
}

Produs::Produs(const Produs& p) {
    nume=new char[strlen(p.nume)+1];
    strcpy(nume,p.nume);
    pret=p.pret;
    stoc=p.stoc;
    strcpy(cod,p.cod);
}

Produs::~Produs() {
    delete[] nume;
}

void Produs::Print() {
    std::cout<<"Nume: "<<nume<<'\n';
    std::cout<<"Pret: "<<pret<<'\n';
    std::cout<<"Stoc: "<<stoc<<'\n';
    std::cout<<"Cod: "<<cod<<'\n';
}

double Produs::Stoc() {
    return pret*stoc;
}

void Produs::Eticheta() {
    std::cout<<"Ati ales produsul cu numele: "<<nume<<'\n';
}

int Produs::Garantie() {
    return 0;
}

class Aliment:public Produs {
private:
    int expira;
public:
    Aliment();
    Aliment(const char*,double,int,const char[],int);
    Aliment(const Aliment&);

    virtual ~Aliment() override;
    virtual void Print() override;
    virtual double Stoc() override;
    virtual void Eticheta() override;
};

Aliment::Aliment():Produs(){
    expira=0;
}

Aliment::Aliment(const char* n, double p, int s, const char c[10], int e):Produs(n,p,s,c) {
   expira=e;
}

Aliment::Aliment(const Aliment & a):Produs(a) {
    expira=a.expira;
}

 Aliment::~Aliment() {

}

void Aliment::Print() {
    Produs::Print();
    std::cout<<"Perioada de expirare: "<<expira<<'\n';
}

double Aliment::Stoc() {
    return pret*stoc;
}

void Aliment::Eticheta() {
    std::cout << "Ati selectat alimentul cu numele: " << nume << "\n";
}

class Electrocasnic : public Produs {
private:
    int garantie;
public:
    Electrocasnic();
    Electrocasnic(const char*,double,int,const char[],int);
    Electrocasnic(const Electrocasnic&);

    virtual ~Electrocasnic() override;
    virtual void Print() override;
    virtual void Eticheta() override;
    virtual int Garantie() override;
};

Electrocasnic::Electrocasnic():Produs() {
    garantie=0;
}

Electrocasnic::Electrocasnic(const char* n, double p, int s,const char c[10], int g):Produs(n,p,s,c) {
    garantie=g;
}

Electrocasnic::Electrocasnic(const Electrocasnic & e):Produs(e) {
    garantie=e.garantie;
}

Electrocasnic::~Electrocasnic(){}

void Electrocasnic::Print() {
    Produs::Print();
    std::cout<<"Perioada de garantie: "<<garantie<<'\n';
}

void Electrocasnic::Eticheta() {
    std::cout<<"Ati ales electocasnicul cu numele: "<<nume<<'\n';
}

int Electrocasnic::Garantie() {
    return garantie;
}

class Raft {
private:
    int nrProd;
    Produs* produse[100];

public:
    Raft();
    ~Raft();

    Raft& Adauga(Produs*);
    Produs* Elimina();
    void InfoProdRaft();
    void ContinutRaft();
};

Raft::Raft():nrProd(0){}

Raft::~Raft() {
    for (int i=0;i<nrProd;i++) {
        delete produse[i];
    }
}

Raft& Raft::Adauga(Produs* p) {
    if (nrProd==100) {
        Produs* u=produse[0];
        for (int i=1;i<nrProd;i++) {
            produse[i-1]=produse[i];
        }
        delete u;
    }
    produse[nrProd++]=p;
    return *this;
}

Produs* Raft::Elimina() {
    if (nrProd==0) {
        return 0;
    }
    Produs* p=produse[nrProd-1];
    nrProd--;
    return p;
}

void Raft::InfoProdRaft() {
    for (int i=0;i<nrProd;i++) {
        produse[i]->Print();
    }
}

void Raft::ContinutRaft() {
    for (int i=0;i<nrProd;i++) {
        produse[i]->Eticheta();
    }
}



int main() {
    Produs* p1=new Produs("Sacou",299.99,10,"NSTA174");
    Produs* p2=new Aliment("Ciocolata",5,20,"CIOCO827",3);
    Produs* p3=new Electrocasnic("Telefon",2000,8,"TELE284",730);

    Raft r;

    r.Adauga(p1).Adauga(p2).Adauga(p3);
    std::cout<<"Raftul contine urmatoarele produse: \n";
    r.ContinutRaft();

    std::cout<<"\n Informatii despre produse: \n";
    r.InfoProdRaft();

    delete r.Elimina();

    std::cout<<"Raftul dupa stergere: \n"; r.ContinutRaft();

    return 0;
}

