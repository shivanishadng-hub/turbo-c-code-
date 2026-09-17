#include <iostream.h>
#include <conio.h>
class abc
{
char a[100];
int i,j,k,l,m;
public:
void num();
void count();
void show();
};
void abc::num()
{
cout<<"enter the word: ";
cin>>a;
}
void abc::count()
{
i=0;j=0;k=0;l=0;m=0;
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='a'||a[i]=='A'||
   a[i]=='e'||a[i]=='E'||
   a[i]=='i'||a[i]=='I'||
   a[i]=='o'||a[i]=='O'||
   a[i]=='u'||a[i]=='U')
{
j++;
}
else if ((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
{
k++;
}
else if(a[i]>='0'&&a[i]<='9')
{
l++;
}
else
{
m++;
}
}
}
void abc::show()
{
cout<<"\n length of words is "<<i;
cout<<"\n vowels is "<<j;
cout<<"\n consonents "<<k;
cout<<"\n numbers "<<l;
cout<<"\n special character "<<m;
}
void main()
{
abc t;
clrscr();
t.num();
t.count();
t.show();
getch();
}
