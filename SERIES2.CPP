#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
int n,sum=0,k;
l1:
clrscr();
cout<<" To Compute The Sum of The Series 1-2+3-4+...+n "<<endl;
cout<<"\nEnter Any Number, n= ";
cin>>n;
if(cin.fail()||N<=0)
{       cin.clear();
	cin.ignore(100,'\n');
	cout<<" Wrong Input Entered, Input Cannot be 0 or Negative, Be Cautious "<<endl;
	cout<<" Enter Again "<<endl;
	getch();
	goto l1;
	exit(0);
}
for(int i=1;i<=n;i++)
{
	k=i;
	if(k%2==0)
	{
		k=k*(-1);
	}
	sum=sum+k;
}
cout<<" The Sum of The Series is \n 1-2+3-4+...+n = "<<sum;
getch();
}