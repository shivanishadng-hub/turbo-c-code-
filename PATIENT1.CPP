#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <dos.h>
class hospital
{
char a[50],b[10];
long int d,r,v,m,t_ch,o,adv,total_room,total_doc,gross,net;
public:
void get();
void calc();
void show();
};
void hospital::get()
{
cout<<"\n Enter Patient Name: ";
cin>>a;
cout<<" Enter Gender: ";
cin>>b;
cout<<" Enter Total Number of Days in IPD: ";
cin>>d;
cout<<" Enter Room Rent Per Day: ";
cin>>r;
cout<<" Enter Doctor Visit Charges Per Day: ";
cin>>v;
cout<<" Enter Medical Charges: ";
cin>>m;
cout<<" Enter Test Charges: ";
cin>>t_ch;
cout<<" Enter Other Charges: ";
cin>>o;
cout<<" Enter Advance Payment: ";
cin>>adv;
}
void hospital::calc()
{
total_room = d * r;
total_doc = d * v;
m = d * m;
t_ch = d * t_ch;
gross = total_room + total_doc + m + t_ch + o;
net = gross - adv;
}
void hospital::show()
{
cout<<"\n================ HOSPITAL BILL ================";
cout<<"\n Patient Name : "<<a;
delay(1000);
cout<<"\n Gender : "<<b;
delay(1000);
cout<<"\n Total IPD Days : "<<d;
delay(1000);
cout<<"\n Total Room Rent : "<<total_room;
delay(1000);
cout<<"\n Total Doctor Fees : "<<total_doc;
delay(1000);
cout<<"\n Medical Charges : "<<m;
delay(1000);
cout<<"\n Test Charges : "<<t_ch;
delay(1000);
cout<<"\n Other Charges : "<<o;
delay(1000);
cout<<"\n-----------------------------------------------";
delay(1000);
cout<<"\n Gross Total Bill : "<<gross;
delay(1000);
cout<<"\n Advance Paid : "<<adv;
delay(1000);
cout<<"\n Net Payable Amount : "<<net;
delay(1000);
cout<<"\n===============================================\n";
}
void main()
{
clrscr();
hospital h;
h.get();
h.calc();
h.show();
getch();
}
