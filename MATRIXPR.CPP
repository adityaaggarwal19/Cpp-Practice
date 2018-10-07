#include<iostream.h>
#include<conio.h>
#include<process.h>
void prime(int x[][20],int p,int q)
{
int i,j,k;
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
int t=0;
for(k=1;k<x[i][j];k++)
{
if(x[i][j]%k==0)
{
t++;
}
}
if(t==1)
{
x[i][j]=0;
}
}
}
cout<<"\n Your New Matrix Is\n";
for(i=0;i<p;i++)
{cout<<"\n";
for(j=0;j<q;j++)
{
cout<<" "<<x[i][j];
}
}
}
void main()
{
l1:
clrscr();
int a[20][20],n,m,i,j;
cout<<" To Read A Matrix Of Size m X n And Replace All The Prime Number By 0 "<<endl;
cout<<" Enter The Information Of The Matrix \n";
cout<<" Enter The Rows Of The Matrix \n";
cin>>m;
if(cin.fail()||m<=0)
{       cin.clear();
	cin.ignore(100,'\n');
	cout<<" Wrong Input Entered, Input Cannot be 0 or Negative, Be Cautious "<<endl;
	cout<<" Enter Again "<<endl;
	getch();
	goto l1;
	exit(0);
}
l2:
cout<<"\nEnter The Columns Of The Matrix \n";
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
for(i=0;i<m;i++)
{
cout<<" Enter The Row "<<i+1<<" ; "<<endl;
for(j=0;j<n;j++)
{
cin>>a[i][j];
}
}
cout<<"\n Your Matrix Is:- \n";
for(i=0;i<m;i++)
{
cout<<"\n";
for(j=0;j<n;j++)
{
cout<<" "<<a[i][j];
}
}
prime(a,m,n);
getch();
}
