#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
int choice,arr[20],rev[20],even[20],odd[20],flag1=0,flag2=0,sum=0,size,max=-32768,min=32767;
l1:
clrscr();
cout<<" To Print Even, Odd, Maximum, Minimum, Sum, Average, Reverse Order Of Array "<<endl;
cout<<" Enter The Size Of Array= ";
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
cout<<" Enter Elements In Array ";
for(int i=0;i<size;i++)
{
	cin>>arr[i];
}

do
{
	cout<<" .....MENU..... ";
	cout<<"\n1.Re-Enter The Array ";
	cout<<"\n2.Print Odd Valued Element Of Array ";
	cout<<"\n3.Print Even Valued Element Of Array ";
	cout<<"\n4.Calculate Sum and Average Of Array ";
	cout<<"\n5.Print The Array In Reverse Order ";
	cout<<"\n6.Maximum And Minimum Element Of Array ";
	cout<<"\n7.Exit ";
	cout<<"\n\nEnter Your Choice= ";
	cin>>choice;

	switch(choice)
	{
		case 1:	cout<<" Enter The Size Of Array= ";
			cin>>size;
			cout<<" Enter The Elements In Array ";
			for(int i=0;i<size;i++)
			{
				cin>>arr[i];
			}
			break;

		case 2: int k=0;
			for(i=0;i<size;i++)
			{
				if(arr[i]%2!=0)
				{
					flag1=1;
					odd[k]=arr[i];
					k++;
				}
			}
			if(flag1==1)
			{
				cout<<" Odd Valued Elements Of Array\n";
				for(i=0;i<k;i++)
				{
					cout<<odd[i]<<endl;
				}
			}
			else
			{
				cout<<" There Is No Odd Element Exist In Array ";
			}
			getch();
			break;

		case 3: k=0;
			for(i=0;i<size;i++)
			{
				if(arr[i]%2==0)
				{
					flag2=1;
					even[k]=arr[i];
					k++;
				}
			}
			if(flag2==1)
			{
				cout<<" Even Valued Elements Of Array\n";
				for(i=0;i<k;i++)
				{
					cout<<even[i]<<endl;
				}
			}
			else
			{
				cout<<" There Is No Even Element Exist In Array ";
			}
			getch();
			break;

		case 4: sum=0;
			for(i=0;i<size;i++)
			{
				sum+=arr[i];
			}
			cout<<" Sum Of The Element Of Array= "<<sum;
			cout<<"\nAverage Of The Element Of Array= "<<sum/size;
			getch();
			break;

		case 5:	for(i=0;arr[i]!=NULL;i++)
			{
				rev[i]=arr[size-i-1];
			}
			for(i=0;i<size;i++)
			{
				cout<<rev[i]<<endl;
			}
			getch();
			break;

		case 6:	for(i=0;i<size;i++)
			{
				if(max<arr[i])
				{
					max=arr[i];
				}
				if(min>arr[i])
				{
					min=arr[i];
				}
			}
			cout<<" Maximum= "<<max;
			cout<<"\nMinimum= "<<min;
			getch();
			break;


		case 7:	cout<<" Exiting ";
			getch();
			exit(0);

		default:  cout<<" Wrong Choice Entered, Be Cautious ";
			  getch();

	}
}while(1);
getch();
}
