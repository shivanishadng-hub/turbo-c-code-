#include <iostream.h>
#include <conio.h>
class abc
{
long int a,b,c;
public:
void num();
void line();
void f1();
void f2();
void f3();
void show();
};
void abc::line()
{
cout<<"\n *******************";
}
void abc::num()
{
cout<<"\n enter any no to find factorial :";
cin>>a;
}
void abc::f1()
{
line();
c=1;
for(b=1;b<=a;b++)
{
c=c*b;
}
{
cout<<"\n fact "<<c<<"\n";
}
}
void abc::f2()
{
c=1;
for(b=a;b>=1;b--)
{
c=c*b;
cout<<b;
if(b>1)
{
cout<<"*";
}
}
cout<<"="<<c;
}

void main()
{
abc t;
clrscr();
t.num();
t.f1();
t.f2();
getch();
}