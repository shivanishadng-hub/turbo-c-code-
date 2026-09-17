#include<iostream.h>
#include<conio.h>
class abc
{
char a[100],b,c;
int d,i;
public:
void num();
void replace();
void show();
};
void abc::num()
{
cout<<"\n enter string: ";
cin>>a;
cout<<"\n which character to change: ";
cin>>b;
cout<<"\n enter new character: ";
cin>>c;
}
void abc::replace()
{
d = 0;
for(i = 0; a[i] != '\0'; i++)
{
if(a[i] == b)
{
a[i] = c;
d = 1;
}
}
}
void abc::show()
{
if(d == 1)
{
cout<<"\n result string: "<<a;
}
else
{
cout<<"\n variable not found";
}
}
void main()
{
clrscr();
abc t;
t.num();
t.replace();
t.show();
getch();
}
