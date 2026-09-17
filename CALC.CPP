#include <iostream.h>
#include <conio.h>
class abc
{
int a,b,c,d,e,f,g,h;
void num();
void add();
void sub();
void mult();
void divi();
void mod();
void choice();
void show();
void stop();
};
void abc::num()
{
cout<<"\n enter 1st number :";
cin>>a;
cout<<"\n enter 2nd number() :";
cin>>b;
}
void abc::add()
{
c=a+b;
cout<<"\n";
}
void abc::sub()
{
c=a-b;
cout<<"\n";
}
void abc::mult()
{
c=a*b;
cout<<"\n";
}
void abc::divi()
{
c=a/b;
cout<<"\n";
}
void abc::mod()
{
c=a%b;
cout<<"\n";
}
void abc::choice()
{
cout<<"\n press 1.add "<<c;
}
void main()
{
abc t;
clrscr();
getch();
}



