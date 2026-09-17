#include <iostream.h>
#include <conio.h>
class abc
{
int a;
public:
int b;
void num();
int value_a();
};
class addition:public abc
{
int c;
public:
void add();
void show();
};
class subtraction:public abc
{
int d;
public:
void sub();
void show();
};
class multiplication:public abc
{
int e;
public:
void mult();
void show();
};
class division:public abc
{
int f;
public:
void divi();
void show();
};
class modulas:public abc
{
int g;
public:
void mod();
void show();
};
void abc::num()
{
cout<<"\n enter any two numbers: ";
cin>>a>>b;
}
int abc::value_a()
{
return a;
}
void addition::add()
{
c=value_a()+b;
}
void addition::show()
{
cout<<"\n a="<<value_a();
cout<<"\n b="<<b;
cout<<"\n addition is "<<c;
}
void subtraction::sub()
{
d=value_a()-b;
}
void subtraction::show()
{
cout<<"\n a="<<value_a();
cout<<"\n b="<<b;
cout<<"\n subtraction is="<<d;
}
void multiplication::mult()
{
e=value_a()*b;
}
void multiplication::show()
{
cout<<"\n a="<<value_a();
cout<<"\n b="<<b;
cout<<"\n multiplication is="<<e;
}
void division::divi()
{
f=value_a()/b;
}
void division::show()
{
cout<<"\n a="<<value_a();
cout<<"\n b="<<b;
cout<<"\n division is="<<f;
}
void modulas::mod()
{
g=value_a()%b;
}
void modulas::show()
{
cout<<"\n a="<<value_a();
cout<<"\n b="<<b;
cout<<"\n modulas is="<<g;
}
void main()
{
int k;
addition u;
subtraction v;
multiplication w;
division x;
modulas z;

clrscr();
cout<<"\n choice list;";
cout<<"\n 1.add";
cout<<"\n 2.sub";
cout<<"\n 3.mult";
cout<<"\n 4.divi";
cout<<"\n 5.mod";
cout<<"\n enter your choice: ";
cin>>k;
if(k==1)
{
u.num();
u.add();
u.show();
}
else if(k==2)
{
v.num();
v.sub();
v.show();
}
else if(k==3)
{
w.num();
w.mult();
w.show();
}
else if(k==4)
{
x.num();
x.divi();
x.show();
}
else if (k==5)
{
z.num();
z.mod();
z.show();
}
else
{
cout<<"\n wrong choice ";
}
getch();
}

