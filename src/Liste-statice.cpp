#include <iostream>
#include <conio.h>
#define NMAX 50

int V; int x[NMAX];

void Initializare() {V=0;}
void Inserare(int a){
  if(V<NMAX){
        x[V++]=a;
    } else std::cout<<"Nu mai e loc pt inserare";
}

void Stergere(int &a){
    if(V){
        a=x[--V];
    } else {std::cout<<"Nu mai e loc in stiva";}
}

void Listare(){
  if(V==0) {std::cout<<"Stiva este vida";}
  else{
      std::cout<<"Elementele stivei: "<<std::endl;;
      for(int i=0;i<V;i++){
          std::cout<<x[i]<<" ";
      } std::cout<<std::endl;
      (void)getch();
  }
}

int main(){
     int x;
     std::cout<<"Dati argumentul functiei Manna-Pnueli: ";
     std::cin>>x;
     int xx=x,y;
     Initializare(); Inserare(x); Listare();

     do
     {
       if(x<12){
           std::cout<<x<<" <12, deci ";
         x+=2;
           std::cout<<"inserez pe "<<x<< std::endl;
         Inserare(x);
         Listare();
       }
       else{
           std::cout<<" "<<x<<" >=12, deci ";
         Stergere(x);}

         if(V==0){
             std::cout<<"Deci f(" <<xx<<")="<<x-1<< std::endl;
           return 0;
         }
         else{
             std::cout<<"scoatem inca un element din varf";
           Stergere(y);
             std::cout<<" si inserez "<<--x<<std::endl;
           Inserare(x);
           Listare();
         }
       }while(true);
     return 0;
}


