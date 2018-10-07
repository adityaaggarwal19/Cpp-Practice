#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
int row;
l1:
clrscr();
cout<<" To Display The Pattern Of Stars "<<endl;
cout<<"\nEnter The Number Of Rows= ";
cin>>row;
if(cin.fail()||row<=0)
{       cin.clear();
	cin.ignore(100,'\n');
	cout<<" Wrong Input Entered, Input Cannot be 0 or Negative, Be Cautious "<<endl;
	cout<<" Enter Again "<<endl;
	getch();
	goto l1;
	exit(0);
}
for(int i=0;i<row;i++)
{
	for(int j=0;j<=i;j++)
	{
		cout<<"*";
	}
	cout<<endl;
}
getch();
}