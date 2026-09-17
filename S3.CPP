#include <iostream.h>
#include <conio.h>
class abc
{
public:
int b,c,d,e;
char a;
void num();
void calc();
void show();
};
void abc::num()
{
a='A';
cout<<"\n character :"<<a;
cout<<"ASSCII Value: "<<int(a);
}
void main()
{
clrscr();
abc t;
t.num();
getch();
}