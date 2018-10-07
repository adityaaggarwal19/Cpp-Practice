#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
l1:
clrscr();
int flag=0,num;
cout<<" To Find Whether A Number Is Prime Or Not "<<endl;
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
if(num>=1)
{
	for(int i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			flag++;
		}
	}

	if(flag==2)
	{
		cout<<" The Number Is Prime ";
	}

	else
	{
		cout<<" The Number Is Not Prime ";
	}

	if(num>1)
	{
		cout<<"\nList Of Prime Numbers "<<num;
		for(i=1;i<=num;i++)
		{
			flag=0;
			for(int j=1;j<=i;j++)
			{
				if(i%j==0)
				{
					flag++;
				}
			}
			if(flag==2)
			{
				cout<<endl<<" "<<i;
			}
		}
	}
	else
	{
		cout<<"\nSorry There Is No Such Number Exist "<<num<<" Which Is Prime";
	}
}
getch();
}


