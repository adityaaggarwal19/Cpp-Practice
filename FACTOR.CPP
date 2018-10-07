#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
int num;
l1:
clrscr();
cout<<" To Compute The Factors Of The Number "<<endl;
cout<<" Enter The Number= ";
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
cout<<" List Of Factors Of A Given Number\n";
for(int i=1;i<=num;i++)
{
	if(num%i==0)
	{
		cout<<i<<endl;
	}
}
getch();
}