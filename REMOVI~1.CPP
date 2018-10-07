//WAP To Removing Given Number From An Array//
#include<iostream.h>
#include<conio.h>
#include<process.h>
void display(int a[], int n)
{
cout<<" New Array is "<<endl;
for (int i=0; i<n; i++)
cout<<a[i]<<endl;
}

void removing(int a[], int &n, int x)
{
	int found=0;
	int i=0;
for(; i<n; i++)
{
if(x==a[i])
{
cout<<" Number Is Found At "<<i+1 <<" Position "<<endl;
found=1;
}

}
if(found==0)
{
cout<<" Number Is Not In The List "<<endl;

exit(0);}
else{int i=0;

for(; i<n; i++)
{
	if(x==a[i])
	{
	int j=i;
	while(j<n){

	a[j]=a[j+1];
	j++;}
		n--;
		i=0;
}

}}

}

void main()
{int n;
clrscr();
cout<<" To Remove The Entered Number From An Array "<<endl;
	cout<<" Enter The  Size Of The Array "<<endl;
	cin>>n;
	if(cin.fail()||n<=0)
{       cin.clear();
	cin.ignore(100,'\n');
	cout<<" Wrong Input Entered, Input Cannot be 0 or Negative, Be Cautious "<<endl;
	cout<<" Enter Again "<<endl;
	main();
	exit(0);
}
	int a[20];
	cout<<" Enter The Elements Of The Array "<<endl;
	for(int i=0; i<n; i++)
	cin>>a[i];
cout<<" Enter The Element Which You Want To Remove "<<endl;
int x;
cin>>x;
removing(a,n,x);
display(a,n);
getch();
}
