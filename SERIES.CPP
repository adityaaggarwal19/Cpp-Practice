#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
float n,sum=0;
l1:
clrscr();
cout<<" To Compute The Sum Of The Series 1 + 1/2 + 1/3 + ... + 1/n "<<endl;
cout<<"\nEnter Any Number, n= ";
cin>>n;
if(cin.fail()||n<=0)
{       cin.clear();
	cin.ignore(100,'\n');
	cout<<" Wrong Input Entered, Input Cannot be 0 or Negative, Be Cautious "<<endl;
	cout<<" Enter Again "<<endl;
	getch();
	goto l1;
	exit(0);
}
for(float i=1;i<=n;i++)
{
	sum=sum+(1/i);
}
cout<<" The Sum Of The Series \n1 + 1/2 + 1/3 + ... + 1/n = "<<sum;
getch();
}