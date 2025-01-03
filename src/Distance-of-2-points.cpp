#include<iostream>
#include <cmath>
using namespace std;

const double R =6371.0;

double haversineDistance(double lat1, double lat2,double lgt1,double lgt2) {
   lat1=lat1*M_PI/180.0;
   lat2=lat2*M_PI/180.0;
   lgt1=lgt1*M_PI/180.0;
   lgt2=lgt2*M_PI/180.0;

   double deltaLat=lat1-lat2;
   double deltaLgt=lgt1-lgt2;

   double A= sin(deltaLat/2)*sin(deltaLat/2)+cos(lat1)*cos(lat1)*sin(deltaLgt/2)*sin(deltaLgt/2);
   double C=2*atan2(sqrt(A),sqrt(1-A));
   double D=R*C;

   return D;
}

int main() {
   double lat1,lat2,lgt1,lgt2;
   cout<<"Enter latitude1: "; cin>>lat1;
   cout<<"Enter longitude1: "; cin>>lgt1;
   cout<<"Enter latitude2: "; cin>>lat2;
   cout<<"Enter longitude2: "; cin>>lgt2;

   double distance = haversineDistance(lat1,lat2,lgt1,lgt2);

   cout<<"Distance is "<<distance<<endl;

   return 0;
}
