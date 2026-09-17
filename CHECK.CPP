#include <iostream.h>
#include <conio.h>
class abc
{
int a,b,c;
public:
void num();
void calc();
void show();
};
void abc::num()
{
cout<<"the factorial of 5 is :=";
}
void abc::calc()
{
c=1;
for(a=5;a>=1;a--)
{
c=c*a;
cout<<a;
if(a>1)
{
cout<<"*";
}
else
{
cout<<"=";
}
}
cout<<c;
}
void main()
{
abc t;
clrscr();
t.num();
t.calc();
getch();
}

