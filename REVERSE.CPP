#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
int num, reverse=0;
l1:
clrscr();
cout<<" To Reverse A Number "<<endl;
cout<<"\nEnter The Number= ";
cin>>num;
if(cin.fail()||num<=0)
{       cin.clear();
	cin.ignore(100,'\n');
	cout<<" Wrong Input Entered, Input Cannot be 0 or Negative, Be Cautious "<<endl;
	cout<<" Enter Again "<<endl;
	getch();
	goto l1;
	exit(0);
}

while(num>0)
{
	reverse=(reverse*10)+(num%10);
	num/=10;
}

cout<<" On Reversing Number Will Be= "<<reverse;
getch();
}