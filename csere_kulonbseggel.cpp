#include "std_lib_facilities.h"

int main()
{
cout<<"Adjon meg 2 számot: \n";
int a; //Első szám
int b; //Második szám

cin>>a>>b;

a = a+b; //a = a+b
b = a-b; //b = (a+b)-b = a
a = a-b; //a = (a+b)-a = b

cout<<"Csere után: "<<a<<","<<b<<"\n";
}



