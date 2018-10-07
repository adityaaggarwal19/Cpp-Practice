#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
l1:
clrscr();
int arr[20],size,flag=0,no_of_comparision=0,location=0,num;
cout<<" To Linear Search A Sorted Array "<<endl;
cout<<" Enter The Size Of The Array= ";
cin>>size;
if(cin.fail()||size<=0)
{       cin.clear();
	cin.ignore(100,'\n');
	cout<<" Wrong Input Entered, Input Cannot be 0 or Negative, Be Cautious "<<endl;
	cout<<" Enter Again "<<endl;
	getch();
	goto l1;
	exit(0);
}
l2:
cout<<" Enter The Element Of The Array (In Ascending Order) ";
for(int i=0;i<size;i++)
{
	cin>>arr[i];
	if(cin.fail()||arr[i]<=0)
{       cin.clear();
	cin.ignore(100,'\n');
	cout<<" Wrong Input Entered, Input Cannot be 0 or Negative, Be Cautious "<<endl;
	cout<<" Enter Again "<<endl;
	getch();
	goto l2;
	exit(0);
}

}
cout<<" Enter A Number You Wanted To Search= ";
cin>>num;
for(i=0;i<size;i++)
{
	if(arr[i]<=num)
	{
		no_of_comparision++;
		if(num==arr[i])
		{
			flag=1;
			location=i+1;
			break;
		}
	}
}
if(flag==0)
{
	cout<<" Number Not Found In The Following Array ";
	cout<<"\nNumber Of Comparision= "<<no_of_comparision;
}
else
{
	cout<<" Number Is Present ";
	cout<<"\nLocation= "<<location;
	cout<<"\nNumber Of Comparision= "<<no_of_comparision;
}
getch();
}