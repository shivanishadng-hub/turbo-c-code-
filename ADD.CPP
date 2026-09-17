#include <iostream.h>
#include <conio.h>
class abc
{
long int a,b,c,d;
public:
void num();
void calc();
void show();
};
void abc::num()
{
cout<<"\n enter first number :";
cin>>a;
cout<<"\n enter second number :";
cin>>b;
}
void abc::calc()
{
c=a+b;
}
void abc::show()
{
cout<<"the sum is ="<<c;
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
