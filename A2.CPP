#include <iostream.h>
#include <conio.h>
class abc
{
long int a,b,c;
public:
void num();
void calc();
void show();
};
void abc::num()
{
cout<<"\n enter any number to find fact :";
cin>>a;
}
void abc::calc()
{
c=1;
for(b=a;b>=1;b--)
{
c=c*b;
cout<<b;
if (b>1)
{
cout<<"*";
}
}
}
void abc::show()
{
cout<<"="<<c;
}
void main()
{
abc t;
clrscr();
t.num();
t.calc();
t.show();
getch();
}
