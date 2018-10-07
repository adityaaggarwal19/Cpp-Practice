#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
  l1:
    clrscr();
    int x,sum=0,product=1;
cout<<" To Find Sum And Product Of Digits Of The Number "<<endl;
cout<<"Enter A Number  ";
    cin>>x;
    if(cin.fail()||x<=0)
{       cin.clear();
	cin.ignore(100,'\n');
	cout<<" Wrong Input Entered, Input Cannot be 0 or Negative, Be Cautious "<<endl;
	cout<<" Enter Again "<<endl;
	getch();
	goto l1;
	exit(0);
}
    for(int i=x;i>0;i=i/10)
    {
	     sum+=i%10;
	     product*=(i%10);
    }
    cout<<"\nThe sum of the digits of the number is "<<sum;
    cout<<"\nThe product of the digits of the number is "<<product;
    getch();
}
