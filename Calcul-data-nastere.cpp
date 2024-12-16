#include <iostream>

using namespace std;

int main(){
  int anC,lunaC,ziC, anN, lunaN, ziN;
  cout<<"Enter current date(year,month,day): "; cin>>anC>>lunaC>>ziC;
  cout<<"Enter date of birth(year,month,day): "; cin>>anN>>lunaN>>ziN;

  int ani = anC - anN;
  if(lunaC<lunaN || lunaC==lunaN && ziC<ziN){
    ani--;
  }
  cout<<ani<<" years";

  return 0;

}