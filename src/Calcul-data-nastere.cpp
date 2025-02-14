#include <iostream>

using namespace std;

int main(){
  int anC,lunaC,ziC, anN, lunaN, ziN;
  cout<<"Enter current date(day,month,year): "; cin>>ziC>>lunaC>>anC;
  cout<<"Enter date of birth(day,month,year): "; cin>>ziN>>lunaN>>anN;

  int ani = anC - anN;
  if(lunaC<lunaN || lunaC==lunaN && ziC<ziN){
    ani--;
  }
  cout<<ani<<" years";

  return 0;

}