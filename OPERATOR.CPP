#include <iostream.h>
#include <conio.h>
class abc
{
int a,b,c,d;
public:
void num();
void calc();
void show();
};
void abc::num()
{
cout<<"\n enter first number: ";
cin>>a;
cout<<"\n enter second number :";
cin>>b;
}
void abc::calc()
{
c=(a>b)?a:b;
}
void abc::show()
{
cout<<"\n largest number"<<c;
}
void main()
{
clrscr();
abc t;
t.num();
t.calc();
t.show();
getch();
}
