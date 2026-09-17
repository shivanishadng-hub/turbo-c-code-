#include <iostream.h>
#include <conio.h>
class abc
{
int a[3][3],b,c,d,e,f;
public:
void num();
void show();
};
void abc::num()
{
b=0;
c=0;
cout<<"\n rules for entering numbers: ";
cout<<"\n row1 (index 0): range 0 to 33 : ";
cout<<"\n row2 (index 1): range 34 to 75 : ";
cout<<"\n row3 (index 2): range 76 to 100 : ";
cout<<"\n-------------------------------------\n\n";
for(d=0;d<3;d++)
{
for(e=0;e<3;e++)
{
cout<<"\n enter number for position [Row"<<d<<",Column"<<e<<"]: ";
cin>>f;
if((d == 0 && (f>=0 && f<=33)) || (d == 1 && (f>=34 && f<=75)) || (d==2 && (f>= 76 && f<=100)))
{
a[d][e] = f;
b++;
cout<<"---> Status: Valid number at position ["<<d<<"]["<<e<<"]\n\n";
}
else
{
a[d][e] = -1;
c++;
cout<<"---> Status: invalid number! ";
if(d==0) cout<<"(allowed range for row 1 is 0 to 33)\n\n";
else if(d==1) cout<<"(allowed range for row 2 is 34 to 75)\n\n";
else if(d==2) cout<<"(allowed range for row 3 is 76 to 100)\n\n";
}
}
}
}
void abc::show()
{
cout<<"\n enterd 2d array matrix (-1 meas invaild entry):\n";
for(d=0;d<3;d++)
{
for(e=0;e<3;e++)
{
cout<<a[d][e]<<"\t";
}
cout<<"\n";
}
cout<<"\n -----------------------------\n";
cout<<" total summary:\n";
cout<<"correct entries :"<<b<<"\n";
cout<<"invaild enteries : "<<c<<"\n";
cout<<"\n--------------------------------\n";
}
void main()
{
char g;
abc t;
do
{
clrscr();
t.num();
t.show();
cout<<"\n do you want to continue again? (y/n): ";
cin>>g;
}
while(g=='Y'|| g=='y');
cout<<"\n program exited. press any key...";
getch();
}


