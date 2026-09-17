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
for(a=1;a<=5;a++)
{
for(b=1;b<=a;b++)
{
cout<<b<<" ";
}
cout<<"\n";
}
}
void main()
{
abc t;
clrscr();
t.num();
getch();
}
