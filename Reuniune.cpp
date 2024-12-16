#include <iostream>

using namespace std;

int main(){
  double a1,a2,b1,b2;
  cout<<"Enter the numbers for the first interval: ";
  cin>>a1>>a2;
  cout<<"Enter the numbers for the second interval: ";
  cin>>b1>>b2;


  if(a2<b1 || b2<a1){
  cout<<"("<<a1<<","<<a2<<") U "<<"("<<b1<<","<<b2<<")";
  }
  else{
    const double c=min(a1,b1);
    const double d=max(a2,b2);
    cout<<"("<<c<<","<<d<<")";
  }
  return 0;

 }