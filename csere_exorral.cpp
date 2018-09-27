#include "std_lib_facilities.h"

int main()
{
cout<<"Adjon meg 2 számot: \n";
int a; //Első szám
int b; //Második szám

cin>>a>>b;

a = a xor b;
b = a xor b;
a = a xor b;

cout<<"Csere után: "<<a<<","<<b<<"\n";
}



