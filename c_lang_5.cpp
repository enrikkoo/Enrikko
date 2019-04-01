#include <cstring>
#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>

using namespace std;
 
int main() {
	
   int *masI = new int [40];
   double *masD = new double [20];
   char *masC = new char [80];
   
   
   
   memset(masI,0x00,40); 
   for (int i = 0; i < 40; i++){ 
   memset(masI+i,0x01,1); }
   memset(masD,0x00,20);
   memset(masC,0x01,80);



   cout <<"int = ";
   for (int i = 0 ; i<10; i++) {
   cout << masI[i];  }
   
   cout<< " "<<endl;
   
   cout <<"double = ";
   for (int i = 0 ; i<10; i++) {
   cout << masD[i];  }
   
   cout<< " "<<endl;
   
   cout <<"char = ";
   for (int i = 0 ; i<10; i++) {
   cout << masC[i];  }
   cout<< " "<<endl;
  
  
  
  memcpy (masC, masI, 80); 
  memcpy (masI, masD, 40); 
  memcpy (masD, masC, 20); 
  
   cout<< " "<<endl;
   
   cout <<"int after = ";
   for (int i = 0 ; i<10; i++) {
   cout << masI[i];  }
   
   cout<< " "<<endl;
   
   cout <<"double after = ";
   for (int i = 0 ; i<10; i++) {
   cout << masD[i];  }
   
   cout<< " "<<endl;
   
   cout <<"char after = ";
   for (int i = 0 ; i<10; i++) {
   cout << masC[i];  }
   
   cout<< " "<<endl;
   
   return 0;
}
